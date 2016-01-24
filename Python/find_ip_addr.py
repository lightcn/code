#!/usr/bin/env python
# encoding: utf-8

# 查找IP地址的归属地


import signal
import urllib
import json
import sys,os,re
import socket

if len(sys.argv) <= 1:
    print('Please input ip address')
    sys.exit(0)

def handler(signum, frame):
    sys.exit(0)
signal.signal(signal.SIGINT, handler)

url = 'http://ip.taobao.com/service/getIpInfo.php?ip='

# 查找IP地址
def ip_location(ip):
    data = urllib.urlopen(url + ip).read()
    datadict = json.loads(data)

    for oneinfo in datadict:
        if 'code' == oneinfo:
            if datadict[oneinfo] == 0:
                return datadict['data']['country']

# 定义IP与域名规则
re_ipaddress = re.compile(r'^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$')
re_domain = re.compile(r'[a-zA-Z0-9][-a-zA-Z0-9]{0,62}(\.[a-zA-Z0-9][-a-zA-Z0-9]{0,62})+\.?')

if os.path.isfile(sys.argv[1]):
    file_path = sys.argv[1]
    fh = open(file_path, 'r')
    for line in fh.readline():
        if re_ipaddress.match(line):
            city_address = ip_location(line)
            print(line.strip() + ':' + city_address)
else:
    ip_address = sys.argv[1]
    if re_ipaddress.match(ip_address): # 如果单个参数是IP地址
        city_address = ip_location(ip_address)
        print(ip_address + ':' + city_address)
    elif(re_domain.match(ip_address)): # 如果参数是域名
        result = socket.getaddrinfo(ip_address, None)
        ip_address = result[0][4][0]
        city_address = ip_location(ip_address)
        print(ip_address.strip() + ':' + city_address)








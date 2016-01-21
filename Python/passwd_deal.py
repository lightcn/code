#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#    > Author: Light.Zhang
#    > Mail: zhilight@gmail.com
#    > Created Time: 16/01/20 22:50:33
import getpass

user = getpass.getuser()
passwd = getpass.getpass()

def sys_login(user, passwd):
    if user is not None and passwd is not None:
        return True
    else:
        return False

if sys_login(user, passwd):
    print('Yay!')
else:
    print('Boo!')

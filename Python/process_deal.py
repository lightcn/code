#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#    > Author: Light.Zhang
#    > Mail: zhilight@gmail.com
#    > Created Time: 16/01/20 23:28:40
import subprocess

# Some text to send
text = b'''
hello world
this is a test
goodby
'''

# Launch a command with pipes
p = subprocess.Popen(['wc'], 
        stdout=subprocess.PIPE,
        stdin=subprocess.PIPE)

# Send the data and get the output
stdout, stderr = p.communicate(text)

# To interpret as a text, decade
out = stdout.decode('utf-8')
err = stderr.decode('utf-8')

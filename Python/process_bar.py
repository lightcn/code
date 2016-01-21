#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#    > Author: Light.Zhang
#    > Mail: zhilight@gmail.com
#    > Created Time: 16/01/21 10:51:34
import sys, time

for i in range(5):
    sys.stdout.write('{0}/5\r'.format(i + 1))
    sys.stdout.flush()
    time.sleep(1)

#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#    > Author: Light.Zhang
#    > Mail: zhilight@gmail.com
#    > Created Time: 16/01/21 10:54:02
import sys, time

for i in range(5):
    sys.stdout.write(str(i) * (5 -1 ) + '\r')
    sys.stdout.flush()
    time.sleep(1)

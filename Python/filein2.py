#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#    > Author: Light.Zhang
#    > Mail: zhilight@gmail.com
#    > Created Time: 16/01/20 22:06:02

import fileinput

with fileinput.input() as f_input:
    for line in f_input:
        print(f_input.filename(), f_input.lineno(), line, end='')

#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#    > Author: Light.Zhang
#    > Mail: zhilight@gmail.com
#    > Created Time: 16/01/20 22:25:32
import argparse
parser = argparse.ArgumentParser(description='Search some file')
parser.add_argument(dest='filename', metavar='filename', nargs='*')
parser.add_argument('-p', '--pat', metavar='pattern', required=True, dest='patterns', action='append', help='text pattern to search for')
parser.add_argument('-v', dest='verbose', action='store_true', help='verbose mode')
parser.add_argument('-o', dest='outfile', action='store', help='output file')
parser.add_argument('--speed', dest='speed', action='store', choices={'slow', 'fast'}, default='slow', help='search speed')
args = parser.parse_args()

# Output the collected arguments
print(args.filename)
print(args.patterns)
print(args.verbose)
print(args.outfile)
print(args.speed)

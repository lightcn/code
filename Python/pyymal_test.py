#!/usr/bin/env python3
# encoding: utf-8

from yaml import load, dump

try:
    from yaml import Cloader as Loader, CDumper as Dumper
except ImportError:
    from yaml import Loader, Dumper

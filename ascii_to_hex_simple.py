#!/usr/bin/env python

import sys
from binascii import hexlify

line = sys.argv[1]

print(hexlify(line))
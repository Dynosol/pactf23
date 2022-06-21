#!/usr/bin/env python

import random
import string
import sys

print(''.join(random.SystemRandom().choice(string.ascii_lowercase + string.ascii_uppercase + string.digits) for _ in range(int(sys.argv[1]))))
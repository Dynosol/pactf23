#!/usr/bin/env python

import random
import string

N = 16 # Hashlen

print(''.join(random.SystemRandom().choice(string.ascii_lowercase + string.ascii_uppercase + string.digits) for _ in range(N)))
#!/bin/python3

import math
import os
import random
import re
import sys
from collections import deque

#
# Complete the 'solve' function below.
#
# The function is expected to return an INTEGER.
# The function accepts LONG_INTEGER x as parameter.
#

def solve(x):
    
    # Write your code here

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        x = int(input().strip())

        result = solve(x)

        fptr.write(str(result) + '\n')

    fptr.close()

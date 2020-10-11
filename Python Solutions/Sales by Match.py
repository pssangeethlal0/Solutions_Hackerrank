#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar): # 1 2 3 1 2 1
    
    pair_of_socks =0
    arr = set(ar)
    for i in arr: #1
        count = 0
        for j in ar:
            if i == j:
                count += 1
        pair_of_socks += count // 2
    return pair_of_socks
        


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()

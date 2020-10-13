#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    positive =0
    negative =0
    zeros = 0
    for i in arr:
        if i>0:
            positive+=1
        elif i<0:
            negative+= 1
        elif i==0:
            zeros+=1
    ratio1 = positive/n
    ratio2 = negative/n
    ratio3= zeros/n
    print(round(ratio1,6))
    print(round(ratio2,6))
    print(round(ratio3,6))


if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)

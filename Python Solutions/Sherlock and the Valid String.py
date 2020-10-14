#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the isValid function below.
def isValid(s):
    l=0
    l1=[]
    k=-1
    c=0
    for i in sorted(set(s)):
        k+=1        
        l = s.count(i)
        l1.append(l)
        print(l1[0],"==",l1[k])
        if (l1[0] == l1[k]):
            #print("keri")
            f = 0
            continue
        else:
            c+=1

        if(c==1):
            f = 0
        else:
            f = 1

    if(f==0):
        return("YES")
    else:
        return("NO")


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = isValid(s)

    fptr.write(result + '\n')

    fptr.close()

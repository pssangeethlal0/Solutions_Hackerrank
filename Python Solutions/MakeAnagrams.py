#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the makeAnagram function below.
def makeAnagram(a, b):
    lena = len(a)
    lenb = len(b)
    tempa = str(a)
    tempb = str(b)

    if lena>=lenb:
        for lettera in tempa:
            for letterb in tempb:
                if lettera == letterb:
                    tempa = tempa.replace(lettera,'',1)
                    tempb = tempb.replace(letterb, '', 1)
                    break
    else:
        for letterb in tempb:
            for lettera in tempa:
                if lettera == letterb:
                    print(lettera)
                    tempa = tempa.replace(lettera,'',1)
                    tempb = tempb.replace(letterb, '', 1)
                    break
    
    return (len(tempa) + len(tempb))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = input()

    b = input()

    res = makeAnagram(a, b)

    fptr.write(str(res) + '\n')

    fptr.close()

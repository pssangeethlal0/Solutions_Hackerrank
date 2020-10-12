import os
import sys
from datetime import date, time, datetime, timedelta  

def TimeConv(s):
    time = datetime.strptime(s,'%I:%M:%S%p').strftime('%H:%M:%S')
    return time

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    result = TimeConv(s)
    f.write(result + '\n')
    f.close()
import numpy

numbers = input().split()

z =  numpy.eye(int(numbers[0]), int(numbers[1]))
print(str(z).replace('1',' 1').replace('0',' 0'))
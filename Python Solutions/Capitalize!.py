def solve(s):
    x=s
    l=[]
    l=x.split(" ")
    for i in range(0,len(l)):
        l[i]=l[i].capitalize()
    x=' '.join(l)
    
    return x
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()

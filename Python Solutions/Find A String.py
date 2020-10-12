def subS(string, sub_string):
    count = 0
    l = len(sub_string)
    for a in range(0,len(string)):
        if(string[a:a+l] == sub_string):
            count += 1
    return count

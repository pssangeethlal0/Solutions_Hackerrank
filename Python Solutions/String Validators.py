def check(s, condition):
    if condition == "isalnum":
        for i in s:
            if i.isalnum():
                return "True"
        return "False"

    if condition == "isalpha":
        for i in s:
            if i.isalpha():
                return "True"
        return "False"

    if condition == "isdigit":
        for i in s:
            if i.isdigit():
                return "True"
        return "False"

    if condition == "islower":
        for i in s:
            if i.islower():
                return "True"
        return "False"

    if condition == "isupper":
        for i in s:
            if i.isupper():
                return "True"
        return "False"

if __name__ == '__main__':
    s = input()

    print(check(s,"isalnum"))
    print(check(s,"isalpha"))
    print(check(s,"isdigit"))
    print(check(s,"islower"))
    print(check(s,"isupper"))

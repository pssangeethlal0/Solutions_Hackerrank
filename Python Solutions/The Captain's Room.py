k = int(input())

rooms = list(map(int, input().split()))

check = [0] * len(rooms)

for no in rooms:
    if check[no] == 0:
        check[no] = 1
    else:
        check[no] += 1

for i in range(len(check)):
    if check[i] == 1:
        print(i)
        break

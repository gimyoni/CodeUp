a, b = map(int,input().split())

if b < 30:
    if a == 0: a = 24
    a = a - 1
    b = b + 30
    print(a, b)
else:
    print(a, b - 30)

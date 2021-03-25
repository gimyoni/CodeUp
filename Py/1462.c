a,b = map(int,input().split())
for i in range(a, 0, -1):
    for j in range(0, b):
        print(i*b-j, end=' ')
    print()

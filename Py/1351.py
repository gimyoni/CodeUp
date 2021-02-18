a, b = map(int, input().split())
for i in range(a, b+1):
    for j in range(1,9+1):
        print(str(i)+'x'+str(j)+"="+str(i*j))

n = int(input())
max_num = n*n
for i in range(n, max_num+1,n):
  for j in range(i, i-n,-1):
    print(j,end=' ')
  print()

n = int(input())

for i in range(n):
  sum = n-i
  for j in range(n):
    print(sum, end=' ') 
    sum+=n
  print()

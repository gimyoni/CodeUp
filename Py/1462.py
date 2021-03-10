n = int(input())

for i in range(n):
  sum = i+1
  for j in range(n):
    print(sum, end=' ') 
    sum+=n
  print()

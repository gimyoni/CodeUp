n = int(input())
maxNum = n*n

for i in range(maxNum):
  if i!=0 and i%n ==0:
    print()
  print(i+1,end=' ')

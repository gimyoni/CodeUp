a = int(input())

for i in range(a):
  for j in range(a-1-i):
    print(" ", end ='')
  for k in range(a):
    print("*",end='')
  print()

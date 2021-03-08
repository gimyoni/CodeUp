n = int(input())
nums = list(map(int,input().split()))

for i in range(0,n):
  print(str(i+1)+":",end=' ')
  for j in range(0,n):
    if i == j:
      continue
    if nums[i]> nums[j]:
      print('>',end=' ')
    elif nums[i]< nums[j]:
      print('<', end=' ')
    else:
      print('=',end=' ')
  print()

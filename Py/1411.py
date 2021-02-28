chk = int(input())
result = [0]*chk
for i in range(chk-1):
  n = int(input())
  result[n-1]+=1
  
for j in range(chk):
  if result[j] == 0:
    print(j+1)
    break

a = input()
chk = 0
for i in range(len(a)):
  if a[i:i+4] == "love":
    chk +=1
print(chk)
    

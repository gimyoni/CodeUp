a = input()
o = 0
c = 0
for i in a:
  if i=="(":
    o+=1
  elif i == ")":
    c+=1

print(o,c)    

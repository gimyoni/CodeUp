a = input()
sum = 0
for i in a:
    sum+=int(i)
if sum%7==4:
    print("suspect")
else:
    print("citizen")

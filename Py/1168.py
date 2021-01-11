a, b = input().split()
b = int(b)

if b == 1 or b== 2:
    age = 2012-(int(a[0:2])+1900)
    print(age+1)

else:
    age = 2012-(int(a[0:2])+2000)
    print(age+1)

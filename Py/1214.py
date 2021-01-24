month = [0,31,28,31,30,31,30,31,31,30,31,30,31]

y, m = map(int, input().split())

if m == 2:
    if ((y%400==0) or (y%4==0 and y%100!=0)):
        print(month[2]+1)
    else:
        print(month[2])
else:
    print(month[m])
        

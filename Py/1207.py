a, b, c, d = map(int,input().split())
sum = a+b+c+d
if sum == 1:
    print("도")
elif sum == 2:
    print("개")
elif sum == 3:
    print("걸")
elif sum == 4:
    print("윷")
else:
    print("모")

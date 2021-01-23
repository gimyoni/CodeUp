a,b,c = map(int, input().split())
x= [a, b, c]
d = max(x)
sum = a+b+c
sum -= d

if d < sum :
    print("yes")
else:
    print("no")

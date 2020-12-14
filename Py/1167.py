a, b, c = map(int, input().split())

if ((b >c or a>c )and (c >= a or c>=b)):
    print(c)
elif ((a > b or c > b) and (b >= a or b >= c)):
    print(b)
else: 
    print(a)

a,b, c= map(int, input().split())
if a>b  and c>b:
    print(b)
elif b>a  and c>a:
    print(a)
else:
    print(c)

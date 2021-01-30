a , b, c= map(int, input().split())

def check(a,b,c):
    if a<=170:
        print("CRASH", end=' ')
        print(a)
        return 0
    if b<=170:
        print("CRASH", end=' ')
        print(b)
        return 0
    if c<=170:
        print("CRASH", end=' ')
        print(c)
        return 0
    if True:
        print("PASS")

check(a,b,c)

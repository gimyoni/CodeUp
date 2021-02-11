a,b,c,n = input().split()
a = int(a)
b = int(b)
c = int(c)
n = int(n)
for i in range(1, n):
    a = a*b+c
print(a)

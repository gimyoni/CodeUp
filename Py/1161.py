a, b= map(int,input().split())

c = ""

if a%2==0:
    c += "짝수+"
else:
    c+="홀수+"

if b%2==0:
    c += "짝수="
else:
    c += "홀수="

if (a+b)%2==0:
    c += "짝수"
else:
    c += "홀수"

print(c)

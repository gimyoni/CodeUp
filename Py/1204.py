a = int(input())
if a % 10 == 1:
    if a == 11:
        print("11th")
    else:
        print(str(a)+"st")
elif a%10 ==2:
    if a == 12:
        print("12th")
    else:
        print(str(a)+"nd")
elif a%10==3:
    if a == 13:
        print("13th")
    else:
        print(str(a)+"rd")
else:
    print(str(a)+"th")


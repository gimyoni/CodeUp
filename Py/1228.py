h, w = map(float, input().split())
pw = (h-100)*0.9
bmi = (w-pw)*100/pw
if bmi<=10:
    print("정상")
elif bmi<=20:
    print("과체중")
else:
    print("비만")

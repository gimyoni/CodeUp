h, w = map(float, input().split())
if h<150:
    pw = h-100
elif 150<=h<160:
    pw = (h-150)/2+50
else:
    pw = (h-100)*0.9


bmi = (w-pw)*100/pw
if bmi<=10:
    print("정상")
elif bmi<=20:
    print("과체중")
else:
    print("비만")

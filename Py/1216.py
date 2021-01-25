y, m, a = map(int, input().split())
sum = m - a;
if y>sum:
	print("do not advertise")
elif y < sum:
	print("advertise")
else:
	print("does not matter")

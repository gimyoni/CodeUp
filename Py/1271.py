a = input()
num = list(map(int, input().split()))
max_num = 0

for n in num:
    if(n > max_num):
        max_num = n
print(max_num)

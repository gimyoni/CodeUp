a = int(input())
b_list = []
b = input()
b_list = b.split()
b_list = map(int, b_list) 
sum = 0
for b in b_list:
    if b%5==0:
        sum+=b
print(sum)

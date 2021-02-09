a = int(input())
b_list = []
b = input()
b_list = b.split()
b_list = map(int, b_list) 
print(sum(b_list))

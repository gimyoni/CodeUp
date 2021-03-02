a_list = list(map(int, input().split()))
for i in range(2):
  a_list.remove(max(a_list))

print(max(a_list))

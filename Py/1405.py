a = int(input())
nums = list(map(int, input().split()))
 
for i in range(a):
    for j in range(a):
        print(nums[j], end = ' ')
    print()
    for k in range(a-1):
        temp = nums[k]
        nums[k] = nums[k+1]
        nums[k+1] = temp
        

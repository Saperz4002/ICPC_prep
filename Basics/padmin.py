t = int(input())
for _ in range(t):
    n = int(input())
    nums = []
    for _ in range(2*n):
        a = int(input())
        nums.append(a)


    nums = sorted(nums)
    s = 0
    for i in range(n-1):
        s += abs(nums[i]-nums[i+1]) + abs(nums[2*n-i-1]-nums[2*n-i-2])
    print(s)
    for i in range(n):
        print(nums[n-i-1], ' ', nums[n+i])

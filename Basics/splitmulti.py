import math
t = int(input())
for _ in range(t):
    n,k = [int(x) for x in input().split()]
    print(math.cel((n-1)/(k-1)))
    
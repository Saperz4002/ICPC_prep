t = int(input())
for _ in range(t):
    a,b,c = [int(x) for x in input().split()]
    if a < b & b < c:
        print('STAIR')
    elif a < b & b > c:
        print('PEAK')
    else:
        print('NONE')
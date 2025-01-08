n,k = [int(x) for x in input().split()]
s = 0.0
x0,y0 = [int(x) for x in input().split()]
for _ in range(n-1):
    xcur, ycur = [int(x) for x in input().split()]
    s += ((xcur - x0)**2 + (ycur - y0)**2)**(1/2)
    x0,y0 = xcur,ycur
print(round(s/50*k,9))

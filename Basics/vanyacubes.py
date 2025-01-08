n = int(input())
for i in range(n+1):
    if 1/6*i*(i+1)*(i+2) > n:
        ans = i -1
        break
    elif 1/6*i*(i+1)*(i+2) == n:
        ans = i
        break
print(ans)
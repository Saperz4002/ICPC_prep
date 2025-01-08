t = int(input())
for _ in range(t):
    n = int(input())
    a = input()
    if a == "1":
        print("YES")
        continue
    if a == "0":
        print("NO")
        continue
    count1 = 0
    count0 = 0
    l = 0
    r = 0
    for i in range(n):
        if a[i] == '1':
            count1 += 1
            ones.append(i)
        else:
            count0 += 1
    if count1 > count0:
        print("YES")
        continue
    if (ones[-1] - ones[0] > 1) and n>2:
        print("YES")
    else:
        print("NO")
 
    
        
        


        


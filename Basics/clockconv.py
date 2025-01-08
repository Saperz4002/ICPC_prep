t = int(input())
for _ in range(t):
    s = input()
    hh = int(s.split(':')[0])
    mm = s.split(':')[1]
    if hh > 12:
        print(str(hh-12).zfill(2) +':'+mm+' PM')
    elif hh == 0:
        print('12'+':'+mm+' AM')
    elif hh == 12:
        print(s.zfill(2)+' PM')
    else:
        print(s.zfill(2)+' AM')



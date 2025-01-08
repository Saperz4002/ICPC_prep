t = int(input())
gato = '##'
puntos = '..'
for _ in range(t):
    n = int(input())
    check = ""
    s1 = ""
    s2 = ""
    for i in range(n):
        if i %2 == 0:
            s1+=gato
            s2 += puntos
        else:
            s1+=puntos
            s2 += gato
    for j in range(n):
        if j%2 == 0:
            print(s1)
            print(s1)
        else:
            print(s2)
            print(s2)
        




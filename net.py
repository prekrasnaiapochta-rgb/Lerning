def fak(b):
    if b == 1:
        return 1
    return b * fak(b - 1)
def sumn(b):
    if b == 1:
        return 1
    return b + sumn(b-1)
def f(n):
    if n == 1 or n == 0:
        return 1
    return f(n-1) + f(n-2)
def um(b):
    for i in range(11):
        print(f"{i} * {b} = ", i*b)
    
def kek(b):
    print(fak(b))
    print(sumn(b))
    print(f(b))
    um(b)
    
b = int(input())
kek(b)    
    
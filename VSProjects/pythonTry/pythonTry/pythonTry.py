#class bird(object):
#    feather = True

#class chicken(bird):
#    fly = False
#    def __init__(self, age):
#        self.age = age
#summer = chicken(2)

#print(bird.__dict__)
#print(chicken.__dict__)
#print(summer.__dict__)

#n = input()

#def main():
#    result = fact(n)
#    print result

#def fact(n):
#    if n == 1:
#        return 1
#    return fact(n-1) * n

#main()
#def myins(n):
#    if not isinstance(n, (int, float)):
#        raise TypeError("bad opratand type")
#    if n >= 0:
#        return n
#    else:
#        return -n

#print myins(n)
#input()

#import math

#def move(x, y, step, angle = 0):
#    nx = x + step * math.cos(angle)
#    ny = y - step * math.sin(angle)
#    return nx, ny

#x, y = move(100, 100, 60, (math.pi) / 6)
#print x, y
num = input
n = input
def power(num, n):
    if n == 1:
        return num
    if n%2 == 0:
        return power(num, n / 2) * (num, n / 2)
    else:
        return num * power(num, n / 2)

power(num, n)

print power
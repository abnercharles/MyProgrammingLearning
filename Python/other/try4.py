SCOREA = 75
dic = {1:4.3, 2:4.0, 3:3.7, 4: 3.3, 5:3.0, 6:2.7, 7:2.3, 8:2.0, 9:1.7, 10:1.0, 11:0}

scoreArray = [range(95,101), range(90,95), range(85,90), range(80,85),\

              range(75,80), range(70,75), range(67,70), range(65,67),\

              range(62,65), range(60,62), range(0,60)]
def setLevel(n):
    if SCOREA in scoreArray[n]:
        return n+1
    else:
        n += 1  
    return setLevel(n)

LEVEL = setLevel(0)
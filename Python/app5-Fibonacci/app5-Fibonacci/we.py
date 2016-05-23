# -*- encoding:utf-8 -*-

class Fibonacci():
    def __init__(self):
        self.FILEORIGIN = open("Fibonacci.txt",'w+')
        self.word = self.FILEORIGIN.read()
        self.fibList = [ 1, 1 ]
        self.numDict = {0:0,1:0,2:0,3:0,4:0,5:0,6:0,7:0,8:0,9:0}
        self.i = 2

    def generateFib(self, n):
        while True:
            if self.i >= n:
                break
            else:
                self.i += 1
                nextNum = self.fibList[len(self.fibList)-1] + self.fibList[len(self.fibList)-2]
                self.fibList.append(nextNum)
                self.generateFib(self.i)

    #def appendDict(self, word, dict):
    #    for w in word:
    #        dict[w] += 1

    def listToString(self):
        self.fibString = '\n'.join(str(e) for e in self.fibList)

    def writeToFile(self):
        self.FILEORIGIN.write(self.fibString)

fib = Fibonacci()

def main():
    n = raw_input("请输入斐波那契数个数： ")
    fib.generateFib(int(n))
    fib.listToString()
    fib.writeToFile()
    fib.FILEORIGIN.close()

main()

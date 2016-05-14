from Tkinter import *
from math import *
from time import sleep
from sys import exit

class Triangle:
    def __init__(self):
        self.root = Tk()
        self.root.title("Triangle")
        self.c = Canvas(self.root, width = 800,height = 600)
        self.c.pack()
        self.listOfClick = []
        self.k = [0,0,0]
        self.edgeLength = [0,0,0]
        self.vertexAngle = [0,0,0]
        self.vertexDegree = [0,0,0]
        self.text = []
        self.buttom = Button(self.root,text="Quit", command=self.quit)
        self.buttom.pack()

    def createTriangle(self):
        # three point?
        if len(self.listOfClick) == 3:
            # create Triangle
            self.A = self.listOfClick[0]
            self.B = self.listOfClick[1]
            self.C = self.listOfClick[2]
            self.drawTriangle()
            self.reDraw()

    def quit(self):
        self.c.destroy()
        exit()

    def drawTriangle(self):
        self.triangle = self.c.create_polygon(self.A, self.B, self.C, fill = 'blue')

    def reDraw(self):
        self.vertexText()
        self.solveEdge()
        self.solveAngle()
        self.solveArea()
        self.drawText()

    def delText(self):
        for i in range(len(self.text)):
            self.c.delete(self.text[i])
        for i in range(3):
            self.c.delete(self.vertexTextList[i])
        self.text = []

    def click(self, event):
        point = [event.x, event.y]
        self.listOfClick.append(point)
        self.createTriangle()

    def mouseClick(self):
        self.c.bind("<Button-1>", self.click)
        
    def vertexText(self):
        self.tA = self.c.create_text(self.A, text = "A")
        self.tB = self.c.create_text(self.listOfClick[1], text = "B")
        self.tC = self.c.create_text(self.C, text = "C")
        self.vertexTextList = [self.tA, self.tB, self.tC]

    def solveNewB(self):
        A = self.A
        B = self.B
        C = self.C
        midAC = [(A[0] + C[0]) / 2.0, (A[1] + C[1]) / 2.0]
        r = self.edgeLength[2] / 2.0
        newBx = midAC[0]
        circle = lambda r,x,a : sqrt(r**2 - (x - a[0]) **2) + a[1]
        newBy = int(circle(r, newBx, midAC))
        self.newB = [newBx, newBy]

    def animation(self):
        while True:
            if sin(self.vertexAngle[0]) < 1e-10:
                sleep(1)
                self.vertexDegree[1] = 90.00
                self.reDraw()
                self.c.update()
                break
            else:
                self.solveNewB()
                offsetX = (self.newB[0] - self.B[0]) / 100.0
                offsetY = (self.newB[1] - self.B[1]) / 100.0
                for i in range(100):
                    sleep(0.04)
                    self.listOfClick[1][0] += offsetX
                    self.listOfClick[1][1] += offsetY
                    self.c.delete(self.triangle)
                    self.drawTriangle()
                    self.delText()
                    self.reDraw()
                    self.c.update()
                self.delText()
                self.vertexDegree[0] = 90.00
                self.vertexText()
                self.drawText()
                self.c.update()
                self.c.mainloop()

    def pointsToEdge(self, vertexList, i):
        return sqrt((vertexList[i][0] - vertexList[i+1][0])**2 + (vertexList[i][1] - vertexList[i+1][1])**2)
    
    def solveEdge(self):
        for i in [0,1,-1]:
            length = self.pointsToEdge(self.listOfClick, i)
            self.edgeLength[i] = length

    def solveAngle(self):
        for i in [0, 1, -1]:
            try:
                k = (self.listOfClick[i][1] - self.listOfClick[i+1][1]) / float((self.listOfClick[i][0] - self.listOfClick[i+1][0]))
            except ZeroDivisionError:
                k = float("inf")
            self.k[i] = k
        for i in [0, 1, -1]:
            angle = atan(fabs((self.k[i]-self.k[i+1])/(1 + self.k[i] * self.k[i+1])))
            self.vertexAngle[i] = angle
            degree = degrees(angle)
            self.vertexDegree[i] = degree

    def solveArea(self):
        self.Area = 0.5 * self.edgeLength[1] * self.edgeLength[0] * sin(self.vertexAngle[0])

    # 绘制文字
    def draw(self, beginCoord, nameList, valueList):
        for i in range(3):
            self.text.append(self.c.create_text((beginCoord[0], beginCoord[1] + 15 * i), text = nameList[i] + ": " + str("%7.2f"%valueList[i])))

    def drawText(self):
        # 边长
        edgeText = ["AB", "BC", "AC"]
        self.draw((80,500), edgeText, self.edgeLength)
        # 角度
        angleText = ["∠ABC", "∠BCA", "∠CAB"]
        self.draw((200, 500), angleText, self.vertexDegree)
        # 面积
        self.text.append(self.c.create_text(360, 530, text = "三角形ABC的面积是： " + str("%7.2f"%self.Area)))

def main():
    tri = Triangle()
    while True:
        tri.c.update()
        tri.mouseClick()
        if len(tri.listOfClick) == 3:
            tri.animation()

if __name__ == '__main__':
    main()
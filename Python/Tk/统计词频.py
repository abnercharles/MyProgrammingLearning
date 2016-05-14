# -*- encoding:utf-8 -*-

import os
import string
from Tkinter import *
import tkFont

class WordFlow():
    def __init__(self):
        self.FILEORIGIN = open("Kobe.txt",'r') 
        self.PUNCTUATION = [',', '.', '(', ')']
        self.wordDict = {}
        self.vacabulary_1_list = []
        self.vacabulary_1_dict = {}
        self.twoGramDict = {}
        self.sortedDict = []
        self.puncDict = {',' : 0, '.' : 0, '(' : 0, ')' : 0}
        self.wordFlow = self.FILEORIGIN.readline()
        self.wordText = string.lower(self.wordFlow)
        
    def appendDict(self, word, dict):
        for w in word:
            if dict.has_key(w):
                dict[w] += 1
            else:
                dict[w] = 1

    def combineDicts(self, x, y):
        for k, v in y.items():
            if k in x.keys():
                x[k] += v
            else:
                x[k] = v

    def calPunctuation(self):
        for i in xrange(len(self.wordFlow)):
            if self.wordFlow[i] in self.PUNCTUATION:
                self.puncDict[self.wordFlow[i]] += 1

    def replaceWithSpace(self, replaceElements, outputText):
        for ch in replaceElements:
            outputText = string.replace(outputText, ch, ' ')
        return outputText

    def splitToTuple(self, dict):
        return string.split(dict)
    
    def sortDict(self, dict):
        return sorted(dict, key = lambda x : x[1], reverse = True)
        
    def writeToFile(self, words, filename):
        file = open(filename+'.txt', 'w')
        for i in words:
            output = format(str(i[0]), "<15") +str(i[1])+'\n'
            file.write(output)
        file.close()

    def closeFile(self):
        self.FILEORIGIN.close()

class draw():
    def __init__(self):
        pass
    def init(self):
        self.root = Tk()
        self.canvas = Canvas(self.root, width = 800, height = 800, bg = "white")
        self.canvas.pack()
        self.titleFont = tkFont.Font(size=16)
        self.buttom = Button(self.root,text="Quit", command=self.root.quit)
        self.buttom.pack()

    # 画出坐标轴
    def drawCoordinate(self):
        self.canvas.create_line((10,750),(780,750), width = 2)
        self.canvas.create_line((50,100),(50,770), width = 2)
        self.canvas.create_text((50, 750), text = "0 ", anchor = SE)
        for i in xrange(6):
            self.canvas.create_line((50, 150 + i*100), (60, 150 + i*100))
            self.canvas.create_text((50, 150 + i*100), text = str(6 - i) + ' ' , anchor = E)

    def drawRec(self, data):
        color = 0x4c98c0
        for i in xrange(10):
            self.canvas.create_rectangle((70 + 70 * i, 750 - 100 * data[i][1]), (120 + 70 * i, 750), fill = '#'+str(hex(color - 15 * i))[2:])
    # 画出文字及表头
    def drawText(self, data):
        # 画表头
        self.canvas.create_text((400,40), text = "出现频率最高的十个单词统计图", font = self.titleFont)
        # 画单词
        for i in xrange(10):
            self.canvas.create_text((95 + 70 * i, 760), text = data[i][0])

def main():
    kobe = WordFlow()
    drawChart = draw()
    while True:
        kobe.__init__()
        inputNum = raw_input("Please enter the question number(1, 2, 3, 4, enter 0 to break): ")
        if inputNum == '1':
            question1(kobe)
            kobe.writeToFile(kobe.sortedDict,"vacabulary")
            print "question 1 done. vacabulary saved to", os.getcwd()+"\\vacabulary.txt"
        elif inputNum == '2':
            question1(kobe)
            question2(kobe)
            kobe.writeToFile(kobe.sortedDict,"vacabulary_1")
            print "question 2 done. vacabulary_1 saved to", os.getcwd()+"\\vacabulary_1.txt"
        elif inputNum == '3':
            question1(kobe)
            question2(kobe)
            question3(kobe)
        elif inputNum == '4':
            drawChart.init()
            question1(kobe)
            question2(kobe)
            question4(drawChart, kobe)
            drawChart.root.mainloop()
            if drawChart.buttom:
                drawChart.root.destroy()
        elif inputNum == '0':
            break
        else:
            print "Wrong input. Please try again"
    kobe.closeFile()

# 第一题
def question1(kobe):
    # 将标点符号替换成空格
    kobe.wordText = kobe.replaceWithSpace(kobe.PUNCTUATION, kobe.wordText)
    # 将字符串分解
    kobe.wordList = kobe.splitToTuple(kobe.wordText)
    kobe.appendDict(kobe.wordList, kobe.wordDict)
    # 计算标点符号
    kobe.calPunctuation()
    # 整合单词和标点
    kobe.combineDicts(kobe.wordDict,kobe.puncDict)
    # 按出现频率排序
    kobe.sortedDict = kobe.sortDict(kobe.wordDict.items())
    kobe.closeFile()
# 第二题
def question2(kobe):
    f = open('stopword.txt', 'r')
    stopword = f.read()
    stopword = string.split(stopword, '\n')
    # 将停用词转换成空格
    kobe.wordList = kobe.splitToTuple(kobe.wordText)
    for ch in stopword:
        i = 0
        while True:
            try:
                if ch == kobe.wordList[i]:
                    del kobe.wordList[i]
                i += 1
            except IndexError:
                break
    kobe.appendDict(kobe.wordList, kobe.vacabulary_1_dict)
    # 按出现频率排序
    kobe.sortedDict = kobe.sortDict(kobe.vacabulary_1_dict.items())
    f.close()
# 第三题
def question3(kobe):
    # 统计 2-gram
    for i in xrange(len(kobe.wordList)-1):
        twoGram = '<' + kobe.wordList[i] + ' ' + kobe.wordList[i+1] + '>'
        if kobe.twoGramDict.has_key(twoGram):
            kobe.twoGramDict[twoGram] += 1
        else:
            kobe.twoGramDict[twoGram] = 1

    # 对 2-gram 进行排序
    sortedDict = kobe.sortDict(kobe.twoGramDict.items())
    # 输出出现次数最多的2-gram
    print u"出现次数最多的2-gram为： ".encode("GBK")
    i = sortedDict[0][1]
    for ch in sortedDict:
        if ch[1] >= i:
            print ch[0], ' ', ch[1]
# 第四题
def question4(drawChart, kobe):
    drawChart.data = kobe.sortedDict
    drawChart.drawRec(drawChart.data)
    drawChart.drawCoordinate()
    drawChart.drawText(drawChart.data)

if __name__ == '__main__':
    main()

# -*- encoding:utf-8 -*-
'''
my class
'''
import string

class WordFlow():

    
    def __init__(self):
        self.FILEORIGIN = open("Kobe.txt",'r')  
        self.PUNCTUATION = [',', '.', '(', ')']
        self.wordDict = {}
        self.puncDict = {',' : 0, '.' : 0, '(' : 0, ')' : 0}
        self.wordFlow = self.FILEORIGIN.readline()
        self.wordText = string.lower(self.wordFlow)

    def appendDict(self, word, dict):
        for w in word:
            if dict.has_key(w):
                dict[w] += 1
            else:
                dict[w] = 1

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

    def writeToFile(self, words, file):
        for i in words:
            output = format(str(i[0]), "<15") +str(i[1])+'\n'
            file.write(output)
        
    def closeFile(self):
        self.FILEORIGIN.close()

def main():
    kobe = WordFlow()
    # 第一题
    # 将标点符号替换成空格
    kobe.wordText = kobe.replaceWithSpace(kobe.PUNCTUATION, kobe.wordText)
    # 将字符串分解
    kobe.wordList = kobe.splitToTuple(kobe.wordText)
    kobe.appendDict(kobe.wordList, kobe.wordDict)
    # 计算标点符号
    kobe.calPunctuation()
    # 整合单词和标点
    combineDicts(kobe.wordDict,kobe.puncDict)
    # 按出现频率排序
    sortedDict = kobe.sortDict(kobe.wordDict.items())
    # 写入文件
    vacabulary = open('vacabulary.txt', 'w')
    kobe.writeToFile(sortedDict, vacabulary)
    vacabulary.close()

    # 第二题
    stopword = open('stopword.txt', 'r')
    kobe.wordText
    kobe.closeFile()
    stopword.close()

def combineDicts(x, y):
    for k, v in y.items():
        if k in x.keys():
            x[k] += v
        else:
            x[k] = v

if __name__ == '__main__':
    main()
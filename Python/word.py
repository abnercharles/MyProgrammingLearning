# -*- encoding:utf-8 -*-
'''
my class
'''
import string

class WordFlow():
    PUNCTUATION = ",.()"
    STOPWORDS = ['a', 'the', 'an', 'and', 'for', 'of', 'on', ',', '.', ' ', '(', ')', '-' ]
    puncs = {',', '.', '(', ')'}
    wordDict = {}
    
    def __init__(self):
        FILEORIGIN = open("C:\\Users\\abnsun\\OneDrive\\Desktop\\Kobe.txt",'r')  
        self.wordFlow = FILEORIGIN.readline()

    
    def lowerWord(self):
        string.lower(self.wordFlow)
        
    def calPunctuation(self):
        for i in xrange(len(self.wordFlow)):
            if self.wordFlow[i] in self.PUNCTUATION:
                for w in self.
                self.puncs[self.wordFlow[i]] += 1
                self.wordFlow.replace()
    
    def delPunctuation(self):
        for i in xrange(len(self.PUNCTUATION)):
            self.
        self.wordSpace
        
    def dictioner(self):
        for w in self.word
        self.wordDict
#    def getToken(self):
#        re.split(self.wordFlow)
        
#    def calTimes(self):
#        pass
        
file1 = WordFlow()
file1.calPunctuation()
print file1.puncs
print file1.wordFlow

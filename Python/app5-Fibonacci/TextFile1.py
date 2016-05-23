# -*- encoding:utf-8 -*-
import random

def initRandom():
    random.seed(None)
    result = random.randint(0,1)

def scoreResult():
    if result == 0:
        return 10
    else:
        return 5


def appendDict(dict, w):
    if dict.has_key(w):
        dict[w] += 1
    else:
        dict[w] = 1

def main():

    times = raw_input("请输入统计次数： ")
    for i in xrange(int(times)):
        totalScore = 0
        scoreDict = {}
        for j in xrange(10):
            initRandom()
            result = scoreResult()
            totalScore += result 
        appendDict(scoreDict, totalScore)
    print scoreDict
# -*- coding:utf-8 -*-
import string
import codecs

f = codecs.open("C:\\Users\\abnsun\\OneDrive\\WorkFiles\\anxin.lrc",'r','utf-8')
fw = codecs.open("C:\\Users\\abnsun\\OneDrive\\WorkFiles\\writeanxin.lrc",'w','utf-8')

def loop():
    for i in xrange(28):
        words = f.readline().encode('utf-8')
        if i > 0:
            encodeWords = words.decode('utf-8')
            alist = string.split(encodeWords,'\\N')
            timeLine = alist[0][:10]
            firstStr = alist[0][10:]
            secondStr = alist[1]
            killn = secondStr[:-1]
            print timeLine + ' ' + secondStr + ' ' + firstStr

#fw.write(strlist)

loop()
f.close()
fw.close()

#!/usr/bin/env python
#-*- coding:utf-8 -*-

import urllib2

file_abs = "C:\\Users\\abnsun\\Documents\\GitHub\\MyProgrammingLearning\\Python\\Urllib\\doc.txt"

response = urllib2.urlopen("http://www.baidu.com/")

source = response.read()
with open(file_abs,"w") as f:
    f.write(source)
    f.close()

print source
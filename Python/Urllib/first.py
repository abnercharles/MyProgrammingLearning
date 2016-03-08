#!/usr/bin/env python
# -*- coding:utf-8 -*-

import urllib2

file_abs = "C:\\Users\\abnsun\\Documents\\GitHub\\MyProgrammingLearning\\Python\\Urllib\\doc.txt"

request = urllib2.Request("http://www.abnsun.com/")
response = urllib2.urlopen(request)

source = response.read()
with open(file_abs, "w") as f:
    f.write(source)
    f.close()

print source

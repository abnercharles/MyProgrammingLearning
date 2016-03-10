#!/usr/bin/env python
# -*- coding:utf-8 -*-

import urllib
import urllib2

value = {"uername": "abnsun@outlook.com", "password": "128324wise-man"}
data = urllib.urlencode(value)
url = "http://passport.csdn.net/account/login?from=http://my.csdn.net/my/mycsdn"
#file_abs = "C:\\Users\\abnsun\\Documents\\GitHub\\MyProgrammingLearning\\Python\\Urllib\\doc.txt"

request = urllib2.Request(url, data)
response = urllib2.urlopen(request)

source = response.read()
# with open(file_abs, "w") as f:
#     f.write(source)
#     f.close()

print source

#!/usr/bin/env python
# -*- coding:utf-8 -*-

import urllib
import urllib2
import cookielib

# '''value = {"uername": "abnsun@outlook.com", "password": "128324wise-man"}
# data = urllib.urlencode(value)
# url = "http://passport.csdn.net/account/login?from=http://my.csdn.net/my/mycsdn"
# #file_abs = "C:\\Users\\abnsun\\Documents\\GitHub\\MyProgrammingLearning\\Python\\Urllib\\doc.txt"

# request = urllib2.Request(url, data)
# response = urllib2.urlopen(request)

# source = response.read()
# # with open(file_abs, "w") as f:
# #     f.write(source)
# #     f.close()

# print source'''
filename = 'cookie.txt'

cookie = cookielib.CookieJar(filename)
handlers = urllib2.HTTPCookieProcessor(cookie)
opener = urllib2.build_opener(handlers)
response = opener.open("http://www.baidu.com/")
cookie.save(ignore_discard=True, ignore_expires=True)

# for item in cookie:
#     print 'Name = '+item.name
#     print 'Value = '+item.value

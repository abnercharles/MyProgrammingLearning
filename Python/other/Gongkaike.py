'''
Created on 2013-6-20
 
@author: zcfrank1st
'''
import urllib
from bs4 import BeautifulSoup
import fnmatch
import sys
 
if __name__ == '__main__':
    url = sys.argv[1]
    html = urllib.urlopen(url).read()
    soup = BeautifulSoup(html)
     
    for link in soup.find_all('a'):
        content = link.get('href')
        if type(content)==type(None):
            pass
        elif fnmatch.fnmatch(content, "*.mp4"):
            print content
        else:
            pass

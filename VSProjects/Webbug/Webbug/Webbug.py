from bs4 import BeautifulSoup
import bs4

#file_abs = "C:\\html\\index.html"
#file = open(file_abs)

html = '''
<html>
<head>
    <title>The Dormouse's story</title>
</head>
<body>
    <p class="title" name="dromouse"> <b>The Dormouse's story</b>
    </p>
    <p class="story">
        Once upon a time there were three little sisters; and their names were
        <a href="http://example.com/elsie" class="sister" id="link1">
            <!-- Elsie --> </a>
        ,
        <a href="http://example.com/lacie" class="sister" id="link2">Lacie</a>
        and
        <a href="http://example.com/tillie" class="sister" id="link3">Tillie</a>
        ;
and they lived at the bottom of a well.
    </p>
    <p class="story">...</p>
'''


soup = BeautifulSoup(html)
##print soup.prettify()
##print "\hr"
##print soup.head
##print soup.a
##print soup.p

#print soup.name
#print soup.head.name

#print soup.p.string
#print soup.p.attrs

#if isinstance(soup.a.string, bs4.element.Comment):
#    print soup.a.string

#print soup.body.children

#for child in soup.body.children:
#    print child

#for I in soup.descendants:
#    print I

for string in soup.strings:
    print(eval(repr(string)))
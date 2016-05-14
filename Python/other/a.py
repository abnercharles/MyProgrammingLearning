import string
punc = ',.()'
a = 'sadasd,sad,asd.asd90()'

def replaceWithSpace(replaceElements, outputText):
    for ch in replaceElements:
        outputText = string.replace(outputText, ch, ' ')

    return outputText


a = replaceWithSpace(punc, a)
print a 

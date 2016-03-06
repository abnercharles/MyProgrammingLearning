for i in range (4):
    print "*" * (i+1) + "\n",

print "\n"

for i in (range(4)[::-1]):
    print " " * i + "*" * (4-i) + "\n",
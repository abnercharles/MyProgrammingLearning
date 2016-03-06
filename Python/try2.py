month = raw_input("Please input the month in number: ")

if month == "2":
    print "That month has 28/29 days"
elif month in ["1","3","5","7","8","10","12"]:
    print "That month has 31 days"
else:
    print "That month has 30 days"
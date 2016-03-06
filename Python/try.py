year = raw_input("Please input the year in number: ")
month = raw_input("Please input the month in number: ")

import time

def Days( year, month ):
    day = 31
    while day:
        try:
            time.strptime( '%s-%s-%d'%( year, month, day ), \
                '%Y-%m-%d' )
            return day
        except:
            day -= 1 

print "The", month, "month, in", year, "has", Days(year,month), "days."
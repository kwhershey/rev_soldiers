f=open('newdata.txt','r')
line=f.readline()
while line:

    words = line.split()
    if words:
        if words[0][-1] is ',':
            husband = line
        elif words[0] is "Spouse:":
            print "found a spouse"
            print words(1,len(words)) + '(' + husband + ')'
    line=f.readline()

f.close()

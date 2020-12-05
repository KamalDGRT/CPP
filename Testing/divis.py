def repeater(s):
    i = (s+s)[1:-1].find(s)
    if i == -1:
        return s
    else:
        return s[:i+1]

def findfunction(s, t):
    tcopy = t
    slen = len(s)
    tlen = len(t)

    l = -1
    while(slen>tlen):
        t = tcopy + t
        tlen = len(t)
    if(s == t):
        rt = repeater(t)
        l = len(rt)
    else:
        l = -1
    return l

s = input()
t = input()

print(findfunction)

import time
def printOut(m):
    l = list(m)
    for i in range(0, len(l)):
        #print each character
        print(l[i], end='', flush=True)
        #timeinterval
        time.sleep(0.10)
    print()

printOut("Hello world!")
input()


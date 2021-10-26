import time

def printOut(m):
    main = list(m)
    for x in range(0, len(main)):
        print(l[x], end='', flush=True)
        time.sleep(0.01)
    print()
	
printOut("Hello World!")
input()

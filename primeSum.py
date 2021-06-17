from math import sqrt

def primeGenerator(n):
    mainList = [True]*(n+1)
    mainList[0] = False
    mainList[1] = False

    for i in range(2, int(sqrt(n) + 1)):
        if mainList[i] is True:
            for j in range(i*i, n+1, i):
                mainList[j] = False
    
    tempList = []
    for i in range(2, len(mainList)):
        if mainList[i] is True:
            tempList.append(i)
    
    return tempList


def primeSum(n):
    primeList = primeGenerator(n)
    count = 0
    for i in range(2, len(primeList)):
        sum = 0
        for j in primeList:
            sum += j
            if sum == primeList[i]:
                count += 1
                break
            elif sum > primeList[i]:
                break
    return count
        

t = int(input("Test cases: "))

while t:
    n = int(input(">"))
    result = primeSum(n)
    print(result)
    t -= 1
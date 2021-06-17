def minDenomination(i):
    count = 0
    while i > 0:
        i = i // 2
        count += 1
    return count

n = int(input())
while n!=0:
    maxPrice = int(input())
    result = minDenomination(maxPrice)
    print(result)
    n -= 1

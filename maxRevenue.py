n = int(input())
arr = []
for i in range(n):
    num = int(input())
    arr.append(num)

arr.sort(reverse = True)                   
maxRevenue = arr[0]                                         
i = 1
for val in range(0, len(arr)):
    tempCost = arr[val]
    tempRevenue = tempCost * i
    if tempRevenue > maxRevenue:
        maxRevenue = tempRevenue
        i += 1

    else:
        i += 1
print(maxRevenue)


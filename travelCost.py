def minCost(n, arr, m):
    if(arr[n-1] == -1):
        return -1
    
    arr = sorted(arr)
    
    i = 0
    while(arr[i] == -1):
        m -= 1
        i += 1
    
    dist = arr.pop()
    cost = dist
    if(m > 0):
        while(m!=0):
            arr.pop()
            m -= 1
        
        for i in range(0, len(arr)):
            if arr[i] == -1:
                continue
            cost += arr[i]
    else:
        for i in range(0, len(arr)):
            if arr[i] == -1:
                continue
            cost += arr[i]

    return cost

n = int(input())
cost = list(map(int, input().split()))
m = int(input())
print(minCost(n, cost, m))
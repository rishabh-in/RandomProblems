def happyVal(n, k, arr):
    happy = 0
    for val in range(0, len(arr)):
        currentMin = arr[val] - k
        currentMax = arr[val] + k
        flag = False    
        for i in range(val+1, len(arr)):
            if arr[i] <= currentMax and arr[i] >= currentMin:
                happy += 1
                flag = True
                break
        
        if flag is True:
            continue

        for j in range(0, val):
            if arr[j] <= currentMax and arr[j] >= currentMin:
                happy += 1
                break

    return happy
        

n, k = map(int, input().split())
arr = list(map(int, input().split()))
print(happyVal(n, k, arr))
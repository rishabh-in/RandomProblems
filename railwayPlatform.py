def minPlateform(arr, dep, n):
    arr = sorted(arr)
    dep = sorted(dep)
    result = 1
    platformNeeded = 1
    i = 1
    j = 0
    while i < n and j < n:
        if(arr[i] <= dep[j]):
            platformNeeded += 1
            i += 1

            if(result < platformNeeded):
                result += 1
        else:
            platformNeeded -= 1
            j += 1
    return result


n = int(input())
arrival = []
dep = []
for i in range(0, n):
    arr, halt = map(int, input().split())
    arrival.append(arr)
    dep.append(arr+halt)

print(minPlateform(arrival, dep, n))
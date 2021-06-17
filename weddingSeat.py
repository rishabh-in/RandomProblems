from collections import defaultdict

t = int(input())
while(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    
    count_dict = defaultdict(int)
    for val in arr:
        count_dict[val] += 1

    inefficiency = k
    for i in count_dict:
        if count_dict[i] > 1:
            inefficiency += count_dict[i]

    nOftables = 1

    for i in range(1,len(arr)):
        if arr[i] == arr[i-1]:
            nOftables += 1

    if nOftables > 1:
        tempCost = k * nOftables

    if(tempCost < inefficiency):
        print(tempCost)
    else:
        print(inefficiency)
    
    t -= 1
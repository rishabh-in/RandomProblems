def minGifts(n, arr):
  giftCount = n
  for i in range(1, n):
    if(arr[i] > arr[i-1]):
      giftCount += 1
  
  return giftCount
 
t = int(input())
while(t):
  n = int(input())
  arr = list(map(int, input().split()))
  result = minGifts(n, arr)
  print(result)
  t -= 1
  

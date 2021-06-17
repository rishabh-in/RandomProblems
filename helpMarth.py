t = int(input())
while(t):
    s = input()
    x1, y1 = map(int, input().split())
    Q = int(input())
    for i in range(Q):
        x2, y2 = map(int, input().split())
        longest = 0;

        for dir in s:
            if(x1 < x2 and dir == 'R'):
                x1 += 1
                longest += 1
            elif(x1 > x2 and dir == 'L'):
                x1 -= 1
                longest += 1
            elif(y1 < y2 and dir == 'U'):
                y1 += 1
                longest += 1
            elif(y1 > y2 and dir == 'D'):
                y1 -= 1;
                longest += 1
        
        if(x1 == x2 and y1 == y2):
            print("YES" +" "+ str(longest))
        else:
            print("NO")
    
    t -= 1

import math

t = int(input())
for i in range(t):
    n1, n2 = input().split(" ")
    n1 = int(n1)
    n2 = int(n2)
    for i in range(n1, n2+1):
        c = 0
        if(i%n1==0)continue;
        for j in range(2, (int)(math.sqrt(i))+1):
            if (i % 2 ==0 or i % j == 0):
                c = c + 1
                break
        if (c == 0 and i != 1):
            print (i)
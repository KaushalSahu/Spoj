#!/usr/bin/python
def rev(n):
    i = n
    temp = 0
    while i > 0:
        temp = (temp * 10) + (i % 10)
        i = i // 10
    return temp

t = int(input())
while t != 0:
    n1, n2 = input().split(" ")
    n1 = int(n1)
    n2 = int(n2)
    sum = rev(n1) + rev(n2)
    print (rev(sum))
    t -= 1
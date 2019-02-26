t = int(input())
for i in range(t):
    n = int(input())
    zeros = 0
    while n >= 5 :
        zeros += n // 5
        n /= 5
    zeros = int(zeros)
    print(zeros)
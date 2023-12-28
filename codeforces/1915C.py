from math import isqrt
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    total = sum(a)
    s = isqrt(total)
    if s * s == total:
        print("YES")
    else:
        print("NO")
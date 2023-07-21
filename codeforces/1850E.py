from math import isqrt
for _ in range(int(input())):
    n, c = map(int, input().split())
    t = 0
    s = list(map(int, input().split()))
    for i in range(n):
        t += s[i]
        c -= s[i] * s[i]
    print((isqrt(t * t + n * c) - t) // (2 * n))
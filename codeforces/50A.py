from math import floor

vars = input().strip().split()
m, n = int(vars[0]), int(vars[1])

if m % 2 == 0:
    answer = m / 2 * n
    print(int(answer))
elif n % 2 == 0:
    answer = n / 2 * m
    print(int(answer))
else: 
    answer = (m - 1) / 2 * n + floor(n / 2)
    print(int(answer))
 

n = int(input())
p = [int(x) for x in input().split()]
q = [int(x) for x in input().split()]

min1 = min(p)
min2 = min(q)

print(abs(min1 - min2))

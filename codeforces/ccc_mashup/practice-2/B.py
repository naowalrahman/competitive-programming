n = int(input())
ans = str(n)[0] * len(str(n))
print(ans if int(ans) >= n else str(int(str(n)[0])+1) * len(str(n)))

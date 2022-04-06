for i in range(int(input())): 
    n = int(input())
    a = list(map(int, input().split()))
    if a != sorted(a): print("YES")
    else: print("NO")
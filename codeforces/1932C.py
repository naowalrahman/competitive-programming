for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    cmds = input()

    l, r = 0, n - 1
    for i in range(n-1):
        if cmds[i] == "L":
            l += 1
        else:
            r -= 1

    ans = [a[l] % m]
    prod = a[l]
    l -= 1
    r += 1
    for i in range(n - 2, -1, -1):
        if cmds[i] == "L":
            prod *= a[l]
            l -= 1
        else:
            prod *= a[r]
            r += 1
        prod %= m
        ans.append(prod)

    print(*reversed(ans))

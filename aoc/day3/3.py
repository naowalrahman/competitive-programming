G = open("3.in").read().splitlines()
coords = set()
adj = dict()

def p1():
    for i, line in enumerate(G):
        for j, char in enumerate(line):
            if char.isdigit() or G[i][j] == ".":
                continue

            for di in range(max(0, i - 1), min(i + 2, len(G))):
                for dj in range(max(0, j - 1), min(j + 2, len(line))):
                    if not G[di][dj].isdigit():
                        continue

                    while dj > 0 and G[di][dj - 1].isdigit():
                        dj -= 1

                    coords.add((di, dj))
    ans = 0
    for i, j in coords:
        s = ""
        while j < len(G[i]) and G[i][j].isdigit():
            s += G[i][j]
            j += 1
        ans += int(s)

    return ans

def p2():
    for i, line in enumerate(G):
        for j, char in enumerate(line):
            if char.isdigit() or G[i][j] != "*":
                continue

            for di in range(max(0, i - 1), min(i + 2, len(G))):
                for dj in range(max(0, j - 1), min(j + 2, len(line))):
                    if not G[di][dj].isdigit():
                        continue

                    while dj > 0 and G[di][dj - 1].isdigit():
                        dj -= 1

                    if not (i, j) in adj:
                        adj[(i, j)] = {(di, dj)}
                    else:
                        adj[(i, j)].add((di, dj))

                    coords.add((di, dj))
    ans = 0
    for coord in adj:
        if len(adj[coord]) == 2:
            ss = []
            for i, j in adj[coord]:
                s = ""
                while j < len(G[i]) and G[i][j].isdigit():
                    s += G[i][j]
                    j += 1
                ss.append(int(s))
            ans += ss[0] * ss[1]
            
    return ans

print(p1(), p2())
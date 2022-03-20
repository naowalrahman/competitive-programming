from math import ceil
for i in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    answer = []
    b = a[::-1]
    if len(a) % 2 == 0:
        for i in range(n // 2):
            answer.append(b[i])
            answer.append(a[i])
    else: 
        for i in range(n // 2 + 1):
            if i == (n // 2):
                answer.append(b[i])
            else: 
                answer.append(b[i])
                answer.append(a[i])
    string_ans = [str(i) for i in reversed(answer)]
    print(" ".join(string_ans))

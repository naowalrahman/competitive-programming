n = int(input())
total_problems = 0

for i in range(n):
    decisions = [int(x) for x in input().split()]
    counter = 0
    for i in decisions:
        if i == 1:
            counter += 1

    if counter >= 2:
        total_problems += 1

print(total_problems)
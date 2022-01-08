n = int(input())
answers = [n]

while n != 1: 
    if n % 2 == 0:
        n = n / 2
    else:
        n = 3 * n + 1
    answers.append(int(n))

print(" ".join(map(str, answers)))

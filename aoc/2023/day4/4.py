lines = open("4.in").read().splitlines()

# part 1

p1 = 0
for line in lines:
    s = line.split(":")[1].split("|")
    p1 += int(2 ** (len(set(map(int, s[0].split())) & set(map(int, s[1].split()))) - 1))
    
print(p1)

# part 2

win, my, match = [], [], []
for line in lines:
    s = line.split(":")[1].split("|")
    win.append(list(map(int, s[0].split())))
    my.append(list(map(int, s[1].split())))
    match.append(len(set(win[-1]) & set(my[-1])))

number = list(range(len(win)))

i = 0
while i < len(win):
    matches = match[i]
    j = number[i]

    win.extend(win[j+1:j+matches+1])
    my.extend(my[j+1:j+matches+1])
    number.extend(list(range(j+1, j+matches+1)))
    match.extend(match[j+1:j+matches+1])

    i += 1

print(len(win))
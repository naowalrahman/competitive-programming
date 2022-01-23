string = list(input().lower())
copy = string[:]

for i in string: 
    if i in ["a", "e", "i", "o", "u", "y"]:
        copy.remove(i)

for i in range(len(copy)):
    copy[i] = "." + copy[i]

print("".join(copy))
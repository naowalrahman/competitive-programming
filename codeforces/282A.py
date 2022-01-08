x = 0 
n = int(input())

for i in range(n): 
    operation = input()
    if operation[1] == "+": 
        x += 1
    else: 
        x -= 1

print(x) 
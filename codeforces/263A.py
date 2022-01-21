matrix = [] # 2D array
for _ in range(5): 
    matrix.append([int(x) for x in input().split()])

for i in range(5): 
    for j in range(5): 
        if matrix[i][j] == 1: 
            row = i 
            col = j

distance = abs(row - 2) + abs(col - 2)
print(distance)
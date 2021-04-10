array = [2, 3, 7, 1, 9, 5] 

def linearsearch(array, target): 
    for i in range(len(array)): 
        if array[i] == target: 
            return i
        return None

print(linearsearch(array, 7))



# 30-item array
array = [4, 9, 10, 14, 15, 16, 
        19, 20, 24, 27, 28, 31, 
        36, 46, 53, 54, 58, 68, 
        69, 75, 76, 79, 82, 84, 
        85, 87, 88, 91, 95, 96] 

def binarysearch(array, target):
    start = 0 
    end = len(array) - 1
    while start <= end:
        mid = round((start + end) / 2)
        if array[mid] == target: 
            return mid 
        elif array[mid] < target: 
            start = mid + 1
        else: 
            end = mid - 1 
    return None # if target doesn't exist

print(binarysearch(array, 10))

arr = [-2, 3, 4, 7, 8, 9, 11, 13]
# linear search 

def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
        return -1
print("Linear search:")
print(linear_search(arr, 12))

# binary search 

def binary_search(arr, target):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = round((start + end) / 2)
        if arr[mid] == target: 
            return mid 
        elif target < arr[mid]:
            end = mid - 1
        else: 
            start = mid + 1
    return -1

print('Binary search:')
print(binary_search(arr, 5))
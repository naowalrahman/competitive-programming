def partition(arr, low, high):
    i = low - 1
    pivot = arr[high]

    for val in range(low, high):
        if arr[val] < pivot:
            i += 1 # set the index value
            arr[val], arr[i] = arr[i], arr[val]

    # swap the high value with the value higher
    arr[i + 1], arr[high] = arr[high], arr[i + 1]

    return i + 1

def quicksort(arr, low, high):
    if low < high:
        # set the partition index
        pi = partition(arr, low, high)

        # call the function recursively
        # for either side of the pi
        quicksort(arr, low, pi - 1)
        quicksort(arr, pi + 1, high)

array = [11, 9, 29, 7, 2, 15, 28]
quicksort(array, 0, len(array) - 1)
print(array)

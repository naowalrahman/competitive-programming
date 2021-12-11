array = [-18, 30, -15, 24, 4, -21, 14, 26, 7, -17, 1, -19, -4, 25, 29, -23, 16, 17, 27, -30]

def kadane(array): 
    local_max = array[0]
    global_max = array[0]
    start_index = 0 
    end_index = 0

    for i in range(1, len(array)): 
        local_max = max(array[i], local_max + array[i])

        if local_max > global_max:
            global_max = local_max
            end_index = i

    start_index = end_index
    permanent_max = global_max

    while start_index >= 0:
        global_max -= array[start_index]
        
        if global_max == 0:
            break

        start_index -= 1
    
    
    return f"start_index, end_index: ({start_index}, {end_index})\nmaximum sum: {permanent_max}"

print(kadane(array))
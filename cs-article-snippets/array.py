# A simple array
list1 = [2, 4, 6, 8, 10] 

# A 3x3 2D array
list2 = [ 
        [2, 4, 6],
        [3, 6, 6],
        [4, 8, 12]
        ] 

# Iterating through the arrays with
# a simple index function
for i in list1: 
    list1.index(i)

for j in list2:
    # printing the sub-arrays
    print(j) 
    for k in j:
        # printing values in the sub-arrays
        print(k) 


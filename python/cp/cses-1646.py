line = input().split()
array_length = int(line[0])
num_queries = int(line[1])
 
array = [int(x) for x in input().split()]
array.insert(0, 0)
 
prefix_array = [array[0]]
for i in range(1, len(array)+1):
    prefix_array.append(prefix_array[i-1] + array[i-1])
 
for i in range(num_queries):
    query = input().split()
    print(prefix_array[int(query[1])+1] - prefix_array[int(query[0])])

nk = [x for x in input().split()]
n = int(nk[0])
k = int(nk[1])
 
array = [int(x) for x in input().split()]
 
counter = 0
 
for i in range(n):
    if array[i] >= array[k-1] and array[i] > 0:
        counter += 1
 
print(counter)
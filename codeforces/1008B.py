num_rectangles = int(input())
rectangles = []
 
for i in range(num_rectangles):
    rectangles.append([int(x) for x in input().split()])
 
canDo = True
last_length = -1

"""
For every rectangle width and length, we check if the largest
width or length is greater than the previous length. If it is,
then set the last length to the max of the current width and
length. Otherwise, if the minimum width or length is less than
the last length, then use that. Finally, if neither is possible, 
then we can't do it.
"""
for i in range(num_rectangles):
    w, l = rectangles[i][0], rectangles[i][1]
    if last_length == -1 or max(w, l) <= last_length:
        last_length = max(w, l)
    elif min(w, l) <= last_length:
        last_length = min(w, l)
    else: 
        canDo = False
        break
 
if canDo == True:
    print("YES")
else:
    print("NO")
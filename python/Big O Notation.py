# linear time: O(n) -> an + b
# example (adding up numbers in a list): 
a = [1,3,4,2,5,2,9,7]
total = 0
for i in a:
    total += i
print(total)

# constant time: O(1) -> n * 1
# it doesn't matter how many items there are, the time is always the same. 
# example (assigning the value of one variable to another variable): 
def constant_function(n):
    new_var = n
    return new_var
print(constant_function("hello there"))

# quadratic time: O(n^2) -> an^2 + bn + c
# example (listing out combinations of items in a list): 
b = [0,2,4,6,8]
for val in b: 
    for other_vals in b: 
        print(val, other_vals)
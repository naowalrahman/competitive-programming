a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
b = [x for x in a if x < 5] 

print('all numbers less than 5 in list a:')

for i in b:
    print(i)

print() 
print('\nvalues less than 5 in a list')
print(b)
print()

less_than_value = int(input('what number is your maximum?\n>>  '))
c = [x for x in a if x < less_than_value]

print('Here are all the numbers less than ' + str(less_than_value) + ': ' + str(c)) 

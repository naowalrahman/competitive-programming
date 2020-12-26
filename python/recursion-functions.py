def fact(n): 
    if n >= 1: 
        return n * fact(n - 1)
    elif n == 0:
        return 1
    else:
        return "invalid input n"

print(fact(5))
# output: 120

def fib(a):
    if a > 2:
        return fib(a - 1) + fib(a - 2)
    elif a == 1 or 2:
        return 1
    else: 
        return "invalid input a"

print(fib(40))
# output: 102334155
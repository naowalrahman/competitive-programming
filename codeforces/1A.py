n, m, a = map(int, input().split())

num1 = 0
num2 = 0

if n % a != 0:
    num1 = n // a + 1
else:
    num1 = n // a
if m % a != 0:
    num2 = m // a + 1
else:
    num2 = m // a   

print(num1*num2)
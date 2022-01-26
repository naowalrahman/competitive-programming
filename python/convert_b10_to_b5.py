# task: convert base 10 input into base 5 representation 
 
def convert_to_b5(n: int):
    """
    convert base 10 to base 5
    """
    if n < 5:
        return n
    else:
        return str(convert_to_b5(n // 5)) + str(n % 5)

print(convert_to_b5(553))
from math import ceil
def diamond(width: int):
    """
    creates a diamond of given width
    uses a list that starts off with the initial
    row of stars, then adds the the previous and 
    next rows of stars,  
    """     
    lines = ["*" * (width)]
    for i in range(width - 2, 0, -2):
        spaces = ceil((width - 1 - i) / 2) * " " 
        stars = i * "*"
        lines.insert(0, spaces + stars + spaces)
        lines.append(spaces + stars + spaces)
    # # use to space out the stars
    # for i in range(len(lines)):
    #     spaced_out = "".join([s + " " for s in list(lines[i])])
    #     lines[i] = spaced_out
    return "\n".join(lines)

print(diamond.__doc__)
print(diamond(int(input())))

# # alternative way to do it unevenly
# width = int(input("Width: "))

# i = 1
# while i < width / 2:
#     print(" " * (width-i) + "* " * i)
#     i += 1

# while i > 0:    
#     print( " " * (width-i) + "* " * i)
#     i -= 1

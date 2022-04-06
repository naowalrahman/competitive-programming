from random import randint
file_object = open(r"output.txt", "w")
main = randint(1, 1000)
file_object.write(str(main) + "\n")

for i in range(main):
    GoL = randint(1, 2)
    if GoL == 1:
        letter = "G " 
    else:
        letter = "L "
    num = randint(1, int(1e9))
    line = letter + str(num) + "\n"
    file_object.write(line)
file_object.close()

s = "hola"

words = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
words2 = []
numbers = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]

ans = 0
s = input()
while s != "\\n":
    word = ""
    word2 = ""
    min_index = 1000
    max_index = -1
    for i in range(9):
        index = s.find(words[i])
        if index != -1 and index < min_index:
            min_index = index
            word = words[i]

    print(word, word2)

    s2 = s[:]
    if word != "":
        s2 = s.replace(word, numbers[words.index(word)], 1)

    for i in range(9):
        index = s.rfind(words[i])
        if index != -1 and index > max_index:
            max_index = index
            word2 = words[i]

    s3 = s[:]
    if word2 != "":
        s3 = (s[::-1].replace(word2[::-1], numbers[words.index(word2)], 1))[::-1]


    """ print(s) """
    first, last = "", ""
    for i in range(len(s2)):
        if s2[i] in numbers:
            first = s2[i]
            break
    for i in range(len(s3)):
        if s3[i] in numbers:
            last = s3[i]


    ans += int(first + last)
    s = input()

print(ans)

string = input()
string = [int(x) for x in list(string) if x != "+"]
string.sort()

string = [str(x) for x in string]

print("+".join(string))

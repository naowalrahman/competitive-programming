string1, string2 = input(), input()

lexi = [string1.lower(), string2.lower()]
lexi.sort() # sort lexicographically

if lexi[0] == lexi[1]:
    print(0)
elif lexi[0] == string1.lower():
    print(-1)
else: 
    print(1)  
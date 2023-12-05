from math import inf
s = ""
s = input()
ans = 0
while s != "\\n":
    id = s.split(":")[0].split()[1]
    # print(id)
    sets = s.split(":")[1].split(";")

    blue, red, green = [-inf] * 3
    for info in sets:
        l = info.split(",")
        colors = {"blue": 0, "red": 0, "green": 0}
        for comb in l:
            number = comb.split()[0]
            color = comb.split()[1]
            colors[color] += int(number)
        # if colors["red"] > 12 or colors["green"] > 13 or colors["blue"] > 14:
        #     valid = False
        blue = max(blue, colors["blue"])
        red = max(red, colors["red"])
        green = max(green, colors["green"])

    ans += blue * red * green
    s = input()

print(ans)

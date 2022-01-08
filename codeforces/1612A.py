# d(p1, p2) = |p1.x - p2.x| + |p1.y - p2.y|
# or just |x1 - x2| + |y1 - y2|
# p1 will always equal (0, 0)

def distance(x, y):
    return abs(x) + abs(y)

t = int(input())
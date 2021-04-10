# node class 
class node: 
    def __init__(self, val): 
        self.val = val 
        # start pointing at nothing
        self.next = None
        self.prev = None

# define the nodes with class Node
n1 = node(15)
n2 = node(35) 
n3 = node(17)
n4 = node(24) 
n5 = node(45)

# linking the nodes to each other
n1.next = n2
n2.next = n3
n3.next = n4
n4.next = n5

n5.prev = n4
n4.prev = n3
n3.prev = n2
n2.prev = n1

print(n1.next)

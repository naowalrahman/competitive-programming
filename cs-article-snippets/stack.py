class stack: 
    def __init__(self):
        # initialize data list
        self.elementlist = [] 

    def push(self, element): 
        self.elementlist.append(element) 
        return element

    def pop(self): 
        # pop is already a function
        # in python, so just passing
        # it as a parameter works
        return self.elementlist.pop()

    def peek(self): 
        return self.elementlist[-1] 

    def is_empty(self): 
        if len(self.elementlist) == 0: 
            return True
        else:
            return False 

if __name__ == '__main__': 
    stack = stack()



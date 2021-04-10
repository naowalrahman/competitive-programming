class queue: 
    def __init__(self, max):
        self.items = [] 
        self.max = max # max capacity 

    def enqueue(self, item): 
        if len(self.items) != self.max:
            self.items.append(item) 
            return item    
        return "overflow" 

    def dequeue(self): 
        if len(self.items) != 0: 
            return self.items.pop(0) 
        return "underflow" 

    def peek(self): 
        return self.items[0] 

    def isfull(self): 
        return len(self.items) == self.max

    def isempty(self): 
        return len(self.items) == 0

if __name__ == "__main__":
    # create queue with capacity of 20
    queue = queue(20) 

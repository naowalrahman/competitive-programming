class Animal:
    def __init__(self, name, species): 
        self.name = name
        self.species = species
    
    def introduction(self):
        var = "This is a {0} and its name is {1}.".format(self.species, self.name)
        print(var)

a1 = Animal("Max", "dog")
a1.introduction()

a2 = Animal("Billy", "giraffe") 
a2.introduction()

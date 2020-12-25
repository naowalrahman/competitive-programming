class Animal:
    def __init__(self, name, species): 
        self.name = name
        self.species = species
    
    def introduction(self):
        var = "This is a {0} and its name is {1}.\n".format(self.species, self.name)
        return var

a1 = Animal("Max", "dog")
a2 = Animal("Billy", "giraffe") 

class Person: 
    def __init__(self, name, personality, is_sitting, animal_owned): 
        self.name = name
        self.personality = personality
        self.is_sitting = is_sitting
        self.animal_owned = animal_owned
        
    def sit_down(self):
        self.is_sitting = True
        print("{0} was originally standing or had an unknown position, but is sitting now.".format(self.name))
    
    def stand_up(self):
        self.is_sitting = False
        print("{0} was originally sitting or had an unknown position, but is standing now.".format(self.name))

    def person_intro(self):
        print(self.name + ":")
        name_dec = "This is {0}.".format(self.name)
        personality_dec = "The person is {0}.".format(self.personality)
        is_sitting_dec = None
        if self.is_sitting == True:
            is_sitting_dec = "The person is currently sitting."
        elif self.is_sitting == False:
            is_sitting_dec = "The person is currently standing."
        else: 
            is_sitting_dec = "The person's position cannot be determined right now."
        print(name_dec)
        print(personality_dec)
        print(is_sitting_dec)
        print(" ")


p1 = Person("Naowal", "smart and bo", True, a2) 
p2 = Person("Zaryab", "bruh and bo", False, a1)

p1.person_intro()
p2.person_intro()

print("Animal that {0} owns:".format(p1.name))
print(p1.animal_owned.introduction())

print("Animal that {0} owns:".format(p2.name))
print(p2.animal_owned.introduction())

print(" ")
print("Thank you for running this basic class implementation demonstration!")

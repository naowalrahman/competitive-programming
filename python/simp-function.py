def simp():
    ahad_inp1 = input("Ahad: ")
    if ahad_inp1 == "Naowal are you playing today?":
        naowal_inp = input("Naowal: ")
        if naowal_inp == "no":
            ahad_inp2 = input("Ahad: ")
            if ahad_inp2 == "Ok then I cannot play today":
                print("simp determiner: You're a simp")

# running the simp function
simp()

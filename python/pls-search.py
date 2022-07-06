import random
import time

user_wallet = 0
user_bank = 0

while True:
    command_inp = input()
    if str(command_inp) == "pls search":
        search_list = ["couch", "bed", "bank", "air", "tree", "attic", "street", "area51"]
        current_search = list({random.choice(search_list), random.choice(search_list), random.choice(search_list)})
        search_inp = input("Where do you want to search?\nyou can search in the " + current_search[0] + ", " + current_search[1] + ", or " + current_search[2] + " >> ")
        if search_inp in current_search:
            earned = random.randint(69, 1783)
            print("You searched in " + search_inp + " and got " + str(earned) + " coins.")
            user_wallet += earned
            search_cooldown = 30
        elif search_inp not in current_search:
            print("That's not even one of the options, you dumdum")
            search_cooldown = 30
        while search_cooldown > 0:
            time.sleep(1)
            search_cooldown -= 1
        if search_cooldown > 0:
            coooldown_command_inp = input()
            if coooldown_command_inp == "pls search":
                print("You can run this command in {0} seconds".format(str(search_cooldown)))
                continue
    if str(command_inp) == "pls dep all":
        user_bank += user_wallet
        print("You deposited " + str(user_wallet) + " coins.")
        user_wallet = 0 
    if str(command_inp) == "pls bal":
        print("Wallet: " + str(user_wallet))
        print("Bank: " + str(user_bank)) 

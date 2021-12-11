from time import sleep

def towersHanoi(source, target, spare, N): 
    if N == 1: 
        print("Move the top disk from", source, "to", target)
    else: 
        towersHanoi(source, spare, target, N-1) 
        print("Move the top disk from", source, "to", target) 
        towersHanoi(spare, target, source, N-1)
    return 

print("Enter the number of disks: ")

N = int(input())

print("This will take", 2**N - 1, "moves")

sleep(1)
towersHanoi("source", "target", "spare", N)

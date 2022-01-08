t = int(input())

for i in range(t): 
    n = int(input())
    clock_number = input()
    if int(clock_number) < 10:
        answer = int(clock_number) 
        print(answer)

    else: 
        num_list = list(clock_number)
        operation_count = 0

        for j in range(len(num_list) - 1):
            if int(num_list[j]) > int(num_list[-1]): 
                num_list[j], num_list[-1] = num_list[-1], num_list[j]
                operation_count += 1
            if int(num_list[j]) > int(num_list[j + 1]): 
                num_list[j], num_list[j + 1] = num_list[j + 1], num_list[j]
                operation_count += 1

                
        print(int("".join(num_list)))
                
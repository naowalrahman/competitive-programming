def gradingStudents(grades): 
    results = [x for x in grades] 
    
    for i in range(len(grades)):
        nextmultiple = grades[i] 

        while nextmultiple % 5 != 0:  
            nextmultiple += 1
            
        if grades[i] >= 38:
            if nextmultiple - grades[i] < 3: 
                results[i] = nextmultiple
    
    return results

grades_list = [73, 67, 38, 33]
print(gradingStudents(grades_list))
               
        
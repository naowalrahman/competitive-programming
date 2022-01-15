#include <iostream>
using namespace std;

double calc(int inp, double num1, double num2) {
    double result;

    
    if (inp == 1)
    {
        result = num1 + num2;
    }
    else if(inp == 2)
    {
        result = num1 - num2;
    }
    else if(inp == 3)
    {
        result = num1 * num2;
    }
    else if(inp == 4)
    {
        result = num1 / num2; 
    }
    return result;
}

int main() { 
    int inp; 
    double num1, num2; 

    cout << "What operation do you want to perform?" << endl; 
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> inp; 

    if(inp != 1 and inp != 2 and inp != 3 and inp != 4)
    { 
        cout << "Invalid operation" << endl; 
    }
    else
    { 
        cout << "Enter num1: "; cin >> num1; 
        cout << "Enter num2: "; cin >> num2; 
        
        cout << calc(inp, num1, num2) << endl;
    }
    
    return 0; 
}
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 1, d, input; //initializing the variables 

    cout << "Enter the range: "; //Taking series range from user
    cin >> input;

    if (input <= 2) //First 3 values are already printed so, user should enter range >= 3
    {
        cout << "Please enter positive number greater than 2.";
        return 1;
    }

    cout << "Fibonacci series: " << a << " " << b << " " << c; //Printing 0 1 1

    for (int i = 3; i < input; i++) //initializing the range
    {
        d = b + c; //adding previous terms
        cout << " " << d; //printing main values
        b = c; //initializing b as c 
        c = d; //initializing c as d 
    }
    return 0;
}

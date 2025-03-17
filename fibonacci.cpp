#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 1, d, input;

    cout << "Enter the range: ";
    cin >> input;

    if (input <= 2)
    {
        cout << "Please enter positive number greater than 2.";
        return 1;
    }

    cout << "Fibonacci series: " << a << " " << b << " " << c;

    for (int i = 3; i < input; i++)
    {
        d = b + c;
        cout << " " << d;
        b = c;
        c = d;
    }
    return 0;
}
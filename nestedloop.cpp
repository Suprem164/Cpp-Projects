#include <iostream>
using namespace std;

// Checking which triangle is formed by given lengths.

int main()
{
    float a, b, c;

    cout << "Enter the length of 1st side: ";
    cin >> a;
    cout << "Enter the length of 2nd side: ";
    cin >> b;
    cout << "Enter the length of 3rd side: ";
    cin >> c;

    if (a == b && b == c)
    {
        cout << "Equilateral triangle.";
    }

    else
    {
        if (a != b && a != c && a != c)
        {
            cout << "Scalen triangle.";
        }
        else
        {
            cout << "Isosceles triangle.";
        }
    }
    return 0;
}
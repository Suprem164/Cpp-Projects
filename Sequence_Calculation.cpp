#include <iostream>
using namespace std;

int main()
{
    int input = 4;
    float first_term, no_of_terms, common_difference, nth_term, sum;

    cout << " 1. Calculate first term.\n 2. Calculate no of terms.\n 3. Calculate common difference.\n 4. Calculate n(th) term.\n 5. Calculate sum of nth terms of AP.\n";

    cout << "\nWhich calculation you want to perform: ";
    cin >> input;

    switch (input)
    {
    case 1:
        if (input == 1)
        {
            cout << "\nEnter no of terms: ";
            cin >> no_of_terms;

            cout << "Enter the common difference: ";
            cin >> common_difference;

            cout << "Enter the (tn) nth term: ";
            cin >> nth_term;

            first_term = nth_term - ((no_of_terms - 1) * common_difference);
            cout << "\nThe first term of AP is " << first_term;
            break;
        }

    case 2:
        if (input == 2)
        {
            cout << "\nEnter n(th) term: ";
            cin >> nth_term;

            cout << "Enter the common difference: ";
            cin >> common_difference;

            cout << "Enter first term: ";
            cin >> first_term;

            no_of_terms = ((nth_term - first_term) / common_difference) + 1;
            cout << "\nThe number of terms in AP is " << no_of_terms;
            break;
        }

    case 3:
        if (input == 3)
        {
            cout << "\nEnter n(th) term: ";
            cin >> nth_term;

            cout << "Enter the number of terms: ";
            cin >> no_of_terms;

            cout << "Enter first term: ";
            cin >> first_term;

            common_difference = (nth_term - first_term) / (no_of_terms - 1);
            cout << "\nThe common difference in AP is " << common_difference;
            break;
        }

    case 4:
        if (input == 4)
        {
            cout << "\nEnter common difference: ";
            cin >> common_difference;

            cout << "Enter the number of terms: ";
            cin >> no_of_terms;

            cout << "Enter first term: ";
            cin >> first_term;

            nth_term = first_term + ((no_of_terms - 1) * common_difference);
            cout << "\nThe n(th) term in AP is " << nth_term;
            break;
        }

    case 5:
        if (input == 5)
        {
            cout << "\nEnter common difference: ";
            cin >> common_difference;

            cout << "Enter the number of terms: ";
            cin >> no_of_terms;

            cout << "Enter first term: ";
            cin >> first_term;

            sum = (no_of_terms / 2) * (2 * first_term + (no_of_terms - 1) * common_difference);
            cout << "\nThe total sum of an AP is " << sum;
            break;
        }
    }
    return 0;
}
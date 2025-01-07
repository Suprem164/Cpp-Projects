#include <iostream>
#include <cmath> //This libray is used to extract maths functions like square,cube etc.
#include <bits/stdc++.h> //This library is used to extract complex maths function like  log(), dy/dx.
using namespace std;

int main()
{
    int input, input_AP = 1, input_GP = 2, input1, input2;
    float first_term, no_of_terms, common_difference, nth_term, sum, common_ratio;

    cout << " 1. Arithmetic Progessiion.\n 2. Geometric Progession.\n";
    cout << "\n Which calculation you want to perform: ";
    cin >> input;

    if (input == input_AP)
    {
        cout << endl
             << " 1. Calculate first term.\n 2. Calculate no of terms.\n 3. Calculate common difference.\n 4. Calculate n(th) term.\n 5. Calculate sum of nth terms of AP.\n";

        cout << "\nWhich calculation you want to perform of Arithmetic Progession: ";
        cin >> input1;

        switch (input1) //Creating a switch statement.
        {
        case 1:
            if (input1 == 1)
            {
                cout << "\nEnter no of terms: ";
                cin >> no_of_terms;

                cout << "Enter the common difference: ";
                cin >> common_difference;

                cout << "Enter the (tn) nth term: ";
                cin >> nth_term;

                first_term = nth_term - ((no_of_terms - 1) * common_difference); //This calculates the first term of an AP.
                cout << "\nThe first term of AP is " << first_term;
                break;
            }

        case 2:
            if (input1 == 2)
            {
                cout << "\nEnter n(th) term: ";
                cin >> nth_term;

                cout << "Enter the common difference: ";
                cin >> common_difference;

                cout << "Enter first term: ";
                cin >> first_term;

                no_of_terms = ((nth_term - first_term) / common_difference) + 1; //This calculates the no of terms of an AS.
                cout << "\nThe number of terms in AP is " << no_of_terms;
                break;
            }

        case 3:
            if (input1 == 3)
            {
                cout << "\nEnter n(th) term: ";
                cin >> nth_term;

                cout << "Enter the number of terms: ";
                cin >> no_of_terms;

                cout << "Enter first term: ";
                cin >> first_term;

                common_difference = (nth_term - first_term) / (no_of_terms - 1); //This calculates the common difference.
                cout << "\nThe common difference of AP is " << common_difference;
                break;
            }

        case 4:
            if (input1 == 4)
            {
                cout << "\nEnter first term: ";
                cin >> first_term;

                cout << "Enter the common difference: ";
                cin >> common_difference;

                cout << "Enter the number of terms: ";
                cin >> no_of_terms;

                nth_term = first_term + ((no_of_terms - 1) * common_difference); //This calculates the n(th) term of an squence.
                cout << "\nThe n(th) term of AP is " << nth_term;
                break;
            }

        case 5:
            if (input1 == 5)
            {
                cout << "\nEnter common difference: ";
                cin >> common_difference;

                cout << "Enter the number of terms: ";
                cin >> no_of_terms;

                cout << "Enter first term: ";
                cin >> first_term;

                sum = (no_of_terms / 2) * (2 * first_term + (no_of_terms - 1) * common_difference); //This calculates the sum of AP.
                cout << "\nThe total sum of an AP is " << sum;
                break;
            }
        }
    }

    if (input == input_GP)
    {
        cout << "\n 1. Calculate first term.\n 2. Calculate no of terms.\n 3. Calculate common ratio.\n 4. Calculate n(th) term.\n 5. Calculate sum of nth terms of GP.\n";

        cout << "\nWhich calculation you want to perform from Geometric Progession: ";
        cin >> input2;

        switch (input2)
        {
        case 1:
            if (input2 == 1)
            {
                cout << "\nEnter no of terms: ";
                cin >> no_of_terms;

                cout << "Enter the common ratio: ";
                cin >> common_ratio;

                cout << "Enter the (tn) nth term: ";
                cin >> nth_term;

                first_term = nth_term / (pow(common_ratio, no_of_terms - 1)); //This calculates the first term of the sequence.
                cout << "\nThe first term of GP is " << first_term;
                break;
            }

        case 2:
            if (input2 == 2)
            {
                cout << "Enter first term: ";
                cin >> first_term;

                cout << "Enter the common ratio: ";
                cin >> common_ratio;

                cout << "Enter the (tn) nth term: ";
                cin >> nth_term;

                no_of_terms = log(nth_term / first_term) / log(common_ratio) + 1; //This calculates the no of terms.
                cout << "\nThe number of terms in GP is " << no_of_terms;
                break;
            }

        case 3:
            if (input2 == 3)
            {
                cout << "Enter first term: ";
                cin >> first_term;

                cout << "Enter no of terms: ";
                cin >> no_of_terms;

                cout << "Enter the (tn) nth term: ";
                cin >> nth_term;

                common_ratio = pow(nth_term / first_term, 1.0 / (no_of_terms - 1)); //This calculates the common ratio.
                cout << "\nThe common ratio is " << common_ratio;
                break;
            }

        case 4:
            if (input2 == 4)
            {
                cout << "Enter the first term: ";
                cin >> first_term;

                cout << "Enter no fo terms: ";
                cin >> no_of_terms;

                cout << "Enter common ratio: ";
                cin >> common_ratio;

                nth_term = first_term * pow(common_ratio, no_of_terms - 1); //This calculates the n(th) term of an sequence.
                cout << "\nThe n(th) term of an GP is " << nth_term;
                break;
            }

        case 5:
            if (input2 == 5)
            {
                cout << "\nEnter the first term: ";
                cin >> first_term;

                cout << "Enter the common ratio: ";
                cin >> common_ratio;

                cout << "Enter the no of terms: ";
                cin >> no_of_terms;

                cout << "Enter the n(th) term: ";
                cin >> nth_term;

                sum = first_term * (pow(common_ratio, no_of_terms) - 1) / (common_ratio - 1); // This calculates the sum of an GP.
                cout << "\nThe sum of GP is " << sum;
                break;
            }
        }
    }
    return 0;
}

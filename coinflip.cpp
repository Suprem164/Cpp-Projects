#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int coin = rand() % 2;

    if (coin == 0)
    {
        cout << "Heads" << endl;
    }

    else
    {
        cout << "Tails" << endl;
    }
    return 0;
}
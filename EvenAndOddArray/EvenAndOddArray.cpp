#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Even" << "   " << "Odd" << endl;

    int number[100];
    for (int i = 0; i < 100; i++)
    {
        number[i] = rand() % 10 + 0;

        if (number[i] % 2 == 0)
        {
            cout << number[i] << "\n";
        }
        else
        {
            cout << "      " << number[i] << "\n";
        }
    }
    return 0;
}

/*
Program Title: Sum of First 50 Natural Numbers
Name: Muhammad Hashim Aftab
Registration Number: L1S26BSCS0116
Assignment Number: 1
*/
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 1; i <= 50; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of first 50 natural numbers (loop): " << sum << endl;

    return 0;
}

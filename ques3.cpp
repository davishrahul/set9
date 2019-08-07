#include <iostream>
using namespace std;
int main()
{
    int number1, number2, count = 0;
    while (!cin.eof())
    {
        cin >> number1 >> number2;
        count++;
        if (count % 2 != 0)
        {
            cout << number1 / number2;
        }
        else
        {
            cout << number1 % number2;
        }
    }
}

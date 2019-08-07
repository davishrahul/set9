#include <iostream>
using namespace std;
int main()
{
    string input;
    int temp;
    cin >> input; //5432
    for (int i = 0; i < input.length(); i++)
    {
        for (int j = i + 1; j < input.length(); j++)
        {
            if (input[i] > input[j])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    for (int i = 0; i < input.length(); i++)
    {
        cout << input[i];
    }
}

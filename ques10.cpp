#include <iostream>
#include <string>
using namespace std;
int main()
{
    string emp = "", input;
    int count = 0;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (isdigit(input[i]))
        {
            count++;
            emp += input[i];
        }
    }
    if (count > 0)
    {
        cout << emp;
    }
    else
    {
        cout << "";
    }
}

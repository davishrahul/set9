#include <iostream>
#include <string>
using namespace std;
int main()
{
    string emp="",input;
    cin>>input;
    for(int i=0;i<input.length();i++)
    {
        if(isdigit(input[i]))
        {
            emp+=input[i];
        }
    }
    cout<<emp;
}

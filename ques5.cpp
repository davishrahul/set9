#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input,emp="",emp1="";
    cin>>input;
    for(int i=0;i<input.length();i++)
    {
        if(i%2!=0)
        {
            emp+=input[i];
        }
        else
        {
            {
                emp1+=input[i];
            }
        }
        
    }
    cout<<emp1<<" ";
    cout<<emp;
}

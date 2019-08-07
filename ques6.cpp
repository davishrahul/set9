#include <iostream>
using namespace std;
int main()
{
    string input;//123
    int count=0;
    cin>>input;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]==input[i+1])
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    
}


#include <iostream>
using namespace std;
int main()
{

    string input;
    int p=0;
    int i;
    int f1=0;

    cout<<"Enter input:\n";
    getline(cin,input); //full line as input

    int len = input.length();
    for(i=0;i<len;i++)
    {
        if(input[i]=='(')
        {
            p++;
        }
        else if(input[i]==')')
        {
            p--;
        }
    }
    if(p == 0)
    {
       cout<<"Input is properly parenthesized";
    }
    else
    {
        cout<<"Input is not properly parenthesized";
    }
    return 0;
}

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
       f1=1;
    }
    else
    {
        cout<<"Input is not properly parenthesized";
        return 0;
    }

    int f=0;
    if(f1==1)
    {

    for(int j=0;j<len;j++)
    {
        if(input[j]=='+'||input[j]=='-'||input[j]=='*'||input[j]=='/')
        {
            if(input[j+1]=='+'||input[j+1]=='-'||input[j+1]=='*'||input[j-1]=='/'||input[j+1]=='('||input[j+1]==')')
            {
                cout<<"\n Invalid expression";
                f=1;
            }
        }
    }
    }
    if(f==0)
    {
        cout<<"\n Input is a valid expression.";
    }

    return 0;
}

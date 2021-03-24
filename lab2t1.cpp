#include <iostream>
#include <string>
using namespace std;

void number(string m)
{
    int j;

    for (j = 0; j < m.length(); j++)
    {
        if (48 <= m[j] && m[j] <= 57)
        {
            cout << "This is a digit";
        }
        else
        {
            cout << "Not a digit";
        }
    }
}

int main()
{
    string s;
    cout<<"Enter something"<<endl;
    cin >> s;
    number(s);
}

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int c;

void number(string m)
{
    int j;

    for(j=0;j<m.length();j++)
    {
        if(48<=m[j] && m[j]<=57)  //asci code of 0-9
        {
            cout<<" <"<<m<<">";

            return;
        }
    }

}
void alphabet(string x)
{
    string alp[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string alp2[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

    string s="id";
    for(int n=0;n<26;n++)
    {
        if(alp[n]==x || alp2[n]==x)
        {
            c++;
            cout<<" <"<<s<<","<<c<<">";
            return;
        }
    }

}

void keyword(string n)
{
    string keyword[32]={"if","else","auto","break","case","char","const","continue","do","double","enum","extern","float","for","goto","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
    int i;
    for(i=0;i<32;i++)
    {
        if(keyword[i]==n)
        {

            cout<<" <"<<n<<">";

            return;
        }
    }
}

void operator1(string s)
{
    string op[7]={"+","-","*","/","=","(",")"};
    for(int i=0;i<7;i++)
    {
        if(op[i]==s)
        {
            cout<<" <"<<s<<">";

            return;
        }
    }

}

void printing(string str)
{
    istringstream ss(str); //stream the string into different variable 

    string word;

    while (ss >> word)
    {

        keyword(word);
        number(word);
        alphabet(word);
        operator1(word);
    }
}

int main()
{

    string input;

    cout<<"Enter input:\n";
    getline(cin,input);

    printing(input);

    return 0;
}
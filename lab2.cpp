#include <iostream>
#include <string>

using namespace std;

    void isDigit(string x)
{
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i]>=48 && x[i]<=57)
        {
           cout << "Is a Digit \n";
           return;
        }
    }
    cout << "Not a Digit \n";
}


void isAlpha(string x)
{
    for (int i = 0; i < x.length(); i++)
    {
        if ((x[i]>=65 && x[i]<=90)||(x[i]>=97 && x[i]<=122))
        {
           cout << "Is an Alphabet \n";
           return;
        }
    }
    cout << "Not an Alphabet \n";
}
int main() {

    string keyword [32] = {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};

    string p;


    cin >> p;
   isAlpha(p);
   isDigit(p);
   bool x=false;
     for(int i=0; i<=32; i++)
    {
        if(keyword[i]== p)
        {
           x= true;
        }
    }



    if(x==true)
        {
            cout<<"This is a keyword";
        }



    else
        {
            cout<<"This is not a keyword";
        }

}
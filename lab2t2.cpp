#include <iostream>
#include <string>


using namespace std;


void iskeyword(string s){


    string keys[32]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   };



  for (int i = 0; i < 32; i++) {
     if (s.find(keys[i]) != string::npos) {
      cout << "It is a keyword";
      return;
  }

  }
        cout << "Not a keyword";


}



int main() {

    string inputstr;
    cout << "Enter the string" << endl;
    getline(cin,inputstr);

    iskeyword(inputstr);



}

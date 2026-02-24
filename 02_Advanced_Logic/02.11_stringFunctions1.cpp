#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
void stringOperations(string str) {
    // 1. Print length of the string
     cout<<"Length: "<<str.length()<<endl;
    // 2. Append " - Modified" to the string
      str.append(" - Modified");
      cout<<"Append: "<<str<<endl;
    // 3. Insert "C++ " at the beginning
      string insert=str.insert(0 , "C++ ");
      cout<<"Insert: "<<insert<<endl;
    // 4. Extract substring of length 5 starting at position 5
      string substring=str.substr(5 , 4);
      cout<<"Extract: "<<substring<<endl;
    // 5. Replace substring at position 5 with "Awesome"
       str.replace(5 , 4 , "Awesome ");
    cout<<"Replace: "<<str<<endl;
}

int main() {
    string str;
    getline(cin, str);
    stringOperations(str);
    getch();
    return 0;
}

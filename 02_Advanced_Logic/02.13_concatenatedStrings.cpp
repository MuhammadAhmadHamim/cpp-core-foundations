//Create a function named concatenateStrings that takes two std::string arguments, str1 and str2. The function should concatenate str1, a space, and str2 together and return the resulting string. In the main function, declare two strings, firstName and lastName, with your first and last names, respectively. Call concatenateStrings with firstName and lastName as arguments, and store the result in a variable named fullName. Print fullName to the console.
//this is my code
#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
string concatenateStrings(string str1, string str2) {
    // Concatenate the strings and return the result
    string fullName;
    fullName+=str1;
    fullName+=" ";
     fullName+=str2;

     return fullName;
}

int main() {
    string firstName;
    string lastName;
    getline(cin, firstName);
    getline(cin, lastName); 
    // Call concatenateStrings and store the result in fullName
    string fullName=concatenateStrings(firstName, lastName);

    // Print fullName
    cout<<fullName;
 getch();
    return 0;
}


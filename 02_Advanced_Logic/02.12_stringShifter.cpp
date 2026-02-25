//Write a C++ program that demonstrates the use of C-style strings. Create a function named printStringInfo that takes a C-style string as input and does the following:

//Prints the string to the console.
//Prints the length of the string (excluding the null character). Use the function strlen(str)
//Prints the character at index 4 of the string.
//Modifies the first character of the string to 'X'.
//Prints the modified string.
//In the main function, declare a C-style string named message and initialize it with the value "Hello, World!". Call printStringInfo with message as the argument.

//You may assume the length of the string is at least 5
//Solution
#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;
void printStringInfo(char str[]) {
    // Print the string
    cout<<"String: "<<str<<endl;

    // Print the length of the string
    cout<<"Length: "<<strlen(str)<<endl;

    // Print the character at index 4
    cout<<"Character at index 4: "<<str[4]<<endl;

    // Modify the first character to 'X'
    str[0]='X';

    // Print the modified string
    cout<<"Modified string: "<<str<<endl;
}

int main() {
    char message[] = "Hello, World!";

    printStringInfo(message);
     getch();
    return 0;
}

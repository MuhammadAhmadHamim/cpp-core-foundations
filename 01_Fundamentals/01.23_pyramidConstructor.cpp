//Write a C++ program that takes an integer N as input and prints a pyramid pattern of numbers like this:

//If N = 5, the output should be:
//
//markdown
//Copy
//Edit
//    1
//   1 2
//  1 2 3
// 1 2 3 4
//1 2 3 4 5
#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int rows;
int j;
int k;
char l;
cout<<"Enter the number of rows you want in your pyramid"<<endl;
cin>>rows;
cout<<"Enter the character you want the pyrmaid of"<<endl;
cin>>l;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print stars
        for (k = 1; k<=(2*i)-1;k++) {
            cout <<l;
        }

        // Move to the next line
        cout << endl;
    }
    getch();
    return 0;
}




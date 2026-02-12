#include <iostream>
using namespace std;

int main() {
    int rows;
int j;
int k;
cout<<"Enter the number you want the pyramid of:"<<endl;
cin>>rows;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print stars
        for (k = 1; k<=i;k++) {
            cout <<k<<" ";
        }

        // Move to the next line
        cout << endl;
    }
    return 0;
}


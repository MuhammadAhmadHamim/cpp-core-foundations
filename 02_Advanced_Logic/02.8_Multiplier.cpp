#include <iostream>
#include<conio.h>
using namespace std;
// Function declaration
void multiplier(int num1,int num2){
    cout<<"The product of given numbers is "<<num1*num2<<endl;
}

int main() {
    int a, b;
    cout<<"Enter any number"<<endl;
    cin >> a;
        cout<<"Enter the second number"<<endl;
	cin >> b;
    // Call the function with a and b as arguments
    multiplier(a,b);
    getch();
    return 0;
}

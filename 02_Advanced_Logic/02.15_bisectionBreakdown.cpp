#include <iostream>
#include<conio.h>
using namespace std;
double bigger(double arg1, double arg2) {
    // Complete the function
return(arg1 > arg2)? arg1 : arg2;
}

int main() {
    int iterations;
    double num1, num2;
    cout<<"Enter the number of times you want the breakdown of bisection"<<endl;
    cin >> iterations;
    cout<<"Enter any number"<<endl;
	cin >> num1;
	cout<<"Enter the second number"<<endl;
	cin >> num2;
	cout<<endl;
                
    for (int i = 0; i < iterations; i++) {
        // Write your code below
        double Bigger=bigger(num1,num2);
        Bigger/=2;
        	        cout<<Bigger<<endl;
        	        (num1>num2)? num1=Bigger : num2=Bigger; 

        if(num1<2 || num2<2){
        	break;
		}
	}
	getch();
    return 0;
}

#include <iostream>
#include<conio.h>
using namespace std;
// Method declaration
void sumNumbers(int j) {
    // Complete Method
    	int sum=0;

    while(j>=1 && j<=1000){
    sum+=j;
    j++;}
    
    cout<<"The sum of numbers from 1 to 1000: "<<sum<<endl;
}

int main() {
	int i=1;
    int n;
    int k;
        cout<<"Enter the numbers of times you want the sum of numbers from 1 to 1000 to be printed:"<<endl;
    cin >> n;
	cout<<"\n";
    for (k=1; k <= n;k++) {
        // Call the method n times
        
        sumNumbers(i);}
    getch();
    return 0;
}

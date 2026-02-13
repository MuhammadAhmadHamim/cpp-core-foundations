#include <iostream>
#include<conio.h>
using namespace std;
// Method declaration
void sumNumbers() {
    // Complete Method
    	int sum=0;
        int j=1;
    while(j<=1000){
    sum+=j;
    j++;

}
    cout<<"The sum of given range is "<<sum<<endl;

}

int main() {
    int n;
    cout<<"Enter the numbers of times you want the sum of numbers from 1 to 1000 to be printed:"<<endl;
    cin >> n;
    cout<<endl;
    for (int i = 0; i < n;i++) {
        // Call the method n times
        sumNumbers();    
    }
    getch();
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
int i;
int j;
cout<<"Enter the szie of your array"<<endl;
    std::cin >> n;
    std::cin.ignore();


    double* arr=new double[n];

    for ( i = 0; i < n; i++) {
    	cout<<"Enter the element of your array"<<endl;
        std::cin >>arr[i];
    }
cout<<"Forward Array= {";
for ( i = 0; i < n; i++) {
    	cout<<arr[i];
		if(i<n-1){
			cout<<" , ";
		}
		else{
			cout<<"}"<<endl;
		}}
    double reverseArr[n];
    
    for( j=n-1 , i=0 ; ;j--){
    	if(i<n){
    	double val;
    	val=arr[i];
    	reverseArr[j]=val;
    	i++;}
    	else{
    		break;
		}
	}

cout<<"Reverse array= {";
    for ( i = 0; i<n; i++) {
        std::cout <<reverseArr[i];
        if(i<n-1){
			cout<<" , ";
		}
		else{
			cout<<"}"<<endl;
		}
    }
    return 0;
}

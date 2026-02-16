#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(){
//Taking the length of array from user
	int n;
cout<<"Enter the number of elements of your array:"<<endl;
cin>>n;

//Dynamically alloted memory with the length fixed by the user
int* numbers=new int[n];

//Filling up the array
for(int i=0 ; i<n ; i++){
	cout<<"Enter the element of your array"<<endl;
	cin>>numbers[i];
}

// Printing the array out
cout<<"The entered array= {";
for(int i=0 ; i<n ; i++){
	cout<<numbers[i];
	(i<n-1)? cout<<" , "  : cout<<"}"<<endl ;
}

//Finding out the maximum entry
int max=numbers[0];
for (int i = 1; i <n; i++) {
    if (numbers[i] > max) {
        max = numbers[i];
    }
}

//Finding out the minimum entry 
int min=numbers[0];
for (int i = 1; i <n; i++) {
    if (numbers[i] < min) {
        min = numbers[i];
    }
}

//Printing both max & min entry out
cout << "The element with maximum value is: " << max<<endl;
cout << "The element with minimum value is: " << min<<endl;

	getch();
	return 0;
}

#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int countUnique(int arr[] , int size){
    int count=1;
    for(int i=0;i<size;i++){
       int number=arr[0];
        if(arr[i] != number){
           number=arr[i];
          	bool test=true;
           for(int j=0;j<i;j++){
           	if(number==arr[j]){
			   test=false;}
			   else{
			   	continue;}
		   }
	if(test==true){
		count++;
	}
	else{
	 continue;	
	}	   
        }
else{
    continue;
}
    }
    return count;
}
int main(){
	int size;
	cout<<"Enter the size of array:";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<"Enter the element:";
		cin>>arr[i];
	}
	cout<<"The number of Unique characters in this array are ";
	cout<<countUnique(arr, size);
	cout<<endl;
	getch();
	return 0;
}

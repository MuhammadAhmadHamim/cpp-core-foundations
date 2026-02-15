#include <iostream> 
#include<conio.h>
using namespace std;
void processArray(int arr[], int size) {
    // Now we can safely work with the array using the size parameter
    cout<<"Given array= {";
  for(int i=0;i<size;i++){
  	cout<<arr[i];
  	if(i==size-1){
  		cout<<"}";
	  }
	  else{
	  	cout<<" , ";
	  }
  }
  cout<<endl;
  cout<<"Size of Array: "<<size<<endl;}

int main() {
 int n;
 cout<<"Enter the number of elements of your Array"<<endl;
 cin>>n;
 
    int* arr=new int[n];

for(int j=0;j<n;j++){
	cout<<"Enter the element with index "<<j<<" :"<<endl;
	cin>>arr[j];
}
cout<<endl;
    processArray(arr,n);
    delete[] arr;
    getch();
    return 0;
}

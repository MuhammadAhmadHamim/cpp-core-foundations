#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int count=0;
    int a;
    cout<<"Enter the number you want to check:";
    cin>>a;
    if(a==0 || a==1){
        cout<<"The given number is not a Prime number"<<endl;
	}
	else{
	for(int i=2;i<a;i++){
    if(a%i==0){
        count++;
    }
    else{
        continue;
    }
    }
    if(count==0){
        cout<<"The given number is a Prime number"<<endl;
    }
    else{
        cout<<"The given number is not a Prime number"<<endl;
    }
}
    getch();
    return 0;
}

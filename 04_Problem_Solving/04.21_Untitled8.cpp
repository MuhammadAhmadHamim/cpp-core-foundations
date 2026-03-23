#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int a;
	cout<<"Enter your Marks(Out of 100)"<<endl;
	cin>>a;
	
	if(a>=90){
		cout<<"Grade:- A+"<<endl;
	}
	
	else if(a>=85){
		cout<<"Grade:- A"<<endl;
	}

	else if(a>=75){
		cout<<"Grade:- B"<<endl;
	}

	else if(a>=70){
		cout<<"Grade:- C"<<endl;
	}

	else if(a>=60){
		cout<<"Grade:- D"<<endl;
	}

	else if(a<=59){
		cout<<"Grade:- F"<<endl;
	}

	getch();
	return 0;
}

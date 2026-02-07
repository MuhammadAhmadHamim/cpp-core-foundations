#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{ //Explict type Casting
double a=4.8734;
int b;
b=(int) a; //C-style Casting
cout<<"C-style casting:"<<b<<endl<<endl;


b=int (a); //Functional-style Casting
cout<<"Functional-style casting:"<<b<<endl;
	getch();
return 0;
}

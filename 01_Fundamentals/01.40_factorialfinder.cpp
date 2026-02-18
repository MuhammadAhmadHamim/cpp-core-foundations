//#include<iostream>
//#include<conio.h>
//using namespace std;
//void timesTen(int number){
//	cout<<"The product of number times ten is "<<number*10<<endl;
//}
//int main(){
//	int number;
//	cout<<"Enter any number:";
	//cin>>number;
//	timesTen(number);
	//getch();
//	return 0;	
//}

/*#include<iostream>
#include<conio.h>
using namespace std;
double r(){
	double radius;
	cout<<"Enter the radius of circle:";
	cin>>radius;
	return radius;
}
double doubleradius(int radius){
	
	double r1;
	r1=radius*radius;
	return r1;

}

double area(double r2){
	double a1;
    a1=(3.141592)*r2;
    return a1;

}

int main(){

double radius=r();
	double r2;
    r2=doubleradius(radius);
    cout<<"The doubled radius of circle is:"<<r2<<endl;
    double a1;
	a1=area(r2);
    cout<<"The area of the given circle is:"<<a1<<endl;
    getch();
    return 0;

}
*/
//#include<iostream>
//#include<conio.h>
//using namespace std;
//bool isEven(int n){
//	if(n%2==0){
	//	return true;
//	}
//	else{
//	return false;
//	}
//}
//int main(){
//int number;
//cout<<"Enter any number:";
//cin>>number;
//bool iseven=isEven(number);
//if(iseven==1){
//	cout<<boolalpha<<iseven<<",The number is even."<<endl;
//}
//else{
//		cout<<boolalpha<<iseven<<",The number is odd."<<endl;
//}
//	getch();
//	return 0;
//}
//#include<iostream>
//#include<conio.h>
//using namespace std;
//double sum(int a , b){
	//double sum;
//	sum=a+b;
//	return sum;
//}
//int main(){
	//double a , b;
//	cout<<"Enter any two numbers:";
	//cin>>a>>b;
//	cout<<sum(a , b);
//}
//#include<iostream>
//#include<conio.h>
//using namespace std;
//int maximum(int a , int b , int c){
//	if(a>b && a>c){
//	return a;
//	}
//	else if(b>a && b>c){
//		return b;
//	}
//	else if(c>b && c>a){
//		return c;
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	int a , b , c;
//	cout<<"Enter any three numbers:";
//	cin>>a>>b>>c;
//	int max;
//	max=maximum(a , b ,c);
//	if(max !=0){	
//	cout<<"The largest of them all is "<<max<<endl;
//}
//else{
//	cout<<"Error,Enter three different numbers."<<endl;
//}
	//getch();
//	return 0;
//}
/*#include<iostream>
#include<conio.h>
using namespace std;
void swap(double a , double b){
	double temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping:"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
}
int main(){
double a ,b;
cout<<"Enter any two numbers:";
cin>>a>>b;
cout<<"Before swapping:"<<endl;
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
swap(a ,b);
getch();
return 0;
}*/
/*#include<iostream>
#include<conio.h>
using namespace std;
bool isLeap(int year){
	if(year%4==0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int year;
	cout<<"Enter the year you wanna check:";
	cin>>year;
	bool check;
	check=isLeap(year);
	if(check==1){
		cout<<boolalpha<<check<<", It is a Leap year"<<endl;
	}
	else{
				cout<<boolalpha<<check<<", It is not a Leap year"<<endl;
	}
	getch();
	return 0;
}*/

/*#include<iostream>
#include<conio.h>
using namespace std;
double getLength(){
	double length;
	cout<<"Enter the length of the rectangle:";
	cin>>length;
	return length;
}

double getWidth(){
	double width;
	cout<<"Enter the width of the rectangle:";
	cin>>width;
	return width;
}

double getArea(double length,double width){
	double Area;
	Area=length * width;
	return Area;
}

void displayData(double length , double width , double Area){
	cout<<"The Length of the Rectangle is "<<length<<endl;
	cout<<"The Width of the Rectangle is "<<width<<endl;
	cout<<"The Area of the Rectangle is "<<Area<<endl;
}
int main(){
	double length;
	length=getLength();
	
	double width;
	width=getWidth();
	
	double Area;
	Area=getArea(length , width);
	cout<<endl;
	displayData(length,width,Area);
	getch();
	return 0;
}*/
// Task 9== Task 5
/*#include<iostream>
#include<conio.h>
using namespace std;
void table(int num){
	cout<<"\t \t \t \t\t  ";
	cout<<"Table of "<<num<<endl;
	for(int i=1;i<=10;i++){
		cout<<num<<"\t\t\t    x\t\t\t"<<i<<"\t\t\t    =\t\t\t"<<num*i<<endl;
	}
}
int main(){
	int num;
	cout<<"Enter the number you want the table of:";
	cin>>num;
	cout<<endl;
	table(num);
	getch();
	return 0;
}*/
#include<iostream>
#include<conio.h>
using namespace std;
void factorial(int num){
	cout<<num<<"! = ";
	int product=1;
	for(int i=num;i>=1;i--){
		cout<<i;
		product*=i;
		if(i !=1){cout<<" x ";}
		else{cout<<" = ";}
	}
	cout<<product;}
int main(){
	int num;
	cout<<"Enter the number you want the Factorial of:";
	cin>>num;
	cout<<endl;
	factorial(num);
	getch();
	return 0;
}
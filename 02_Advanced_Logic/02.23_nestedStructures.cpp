#include<iostream>
#include<conio.h>
using namespace std;
struct dimensions{
	float length;
	float width;
};
struct results{
	float area;
	float perimeter;
};
struct Rectangle{
         dimensions d1;
         results re1;
};
Rectangle input(){
	Rectangle r1;
	cout<<"Enter the length of rectangle:";
	cin>>r1.d1.length;
	cout<<"Enter the width of rectangle:";
	cin>>r1.d1.width;
	r1.re1.area=r1.d1.length*r1.d1.width;
	r1.re1.perimeter=4*r1.d1.length;
	return r1;
}
void display(Rectangle R1){
	cout<<"Length:"<<R1.d1.length<<endl;
	cout<<"Width:"<<R1.d1.width<<endl;
	cout<<"Area:"<<R1.re1.area<<endl;
	cout<<"Perimeter:"<<R1.re1.perimeter<<endl;
}
int main(){
	Rectangle r1;
	r1=input();
	display(r1);
	getch();
	return 0;
}

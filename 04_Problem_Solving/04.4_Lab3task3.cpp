#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	int units;
	float mass;
	cout<<"Enter the mass.."<<endl;
	cin>>mass;
	cout<<"Enter the units.."<<endl;
	cin>>units;
	double weight;
	weight=mass*units;
	cout<<"Weight= "<<weight<<endl;
		getch();
	return 0;
	//B.The correct option is that the units is promoted to float,mass remains a float,and the result of mass*units is a float.
}

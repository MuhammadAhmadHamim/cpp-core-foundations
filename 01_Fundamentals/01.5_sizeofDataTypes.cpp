#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"Let's display some major datatypes and their sizes in bytes.."<<endl;
	cout<<"DataType \t \t \t ";
	cout<<"Size"<<endl;
	cout<<"int \t \t \t";
	cout<<"\t "<<sizeof(int);
	cout<<" bytes"<<endl;
	cout<<"float \t \t \t";
	cout<<"\t "<<sizeof(float);
	cout<<" bytes"<<endl;
	cout<<"char \t \t \t";
	cout<<"\t "<<sizeof(char);
	cout<<" bytes"<<endl;
	cout<<"double \t \t \t";
	cout<<"\t "<<sizeof(double);
	cout<<" bytes"<<endl;
	cout<<"boolean \t \t \t";
	cout<<" "<<sizeof(bool);
	cout<<" bytes"<<endl;
	cout<<"string \t \t \t";
	cout<<"\t "<<sizeof(string);
	cout<<" bytes"<<endl;
		getch();
	return 0;
		
}

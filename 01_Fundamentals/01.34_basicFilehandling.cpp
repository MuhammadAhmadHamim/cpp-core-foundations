#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
struct Student{
	string name;
	int rollNumber;
	int marks;
	char grade;
};
Student s1;
void inputData(){
	cout<<"Enter the name of the student:";
	getline(cin,s1.name);
	cout<<"Enter the Rollnumber of the student:";
	cin>>s1.rollNumber;
	cout<<"Enter the marks of the student:";
	cin>>s1.marks;
	cout<<"Enter the grade of the student:";
	cin>>s1.grade;
	cin.ignore();
}
int main(){
	inputData();
	ofstream write;
	write.open("Student Report.txt");
	write<<"Name:"<<s1.name<<endl;
	write<<"Rollnumber:"<<s1.rollNumber<<endl;
	write<<"Marks:"<<s1.marks<<endl;
	write<<"Grade:"<<s1.grade<<endl;
	write.close();

	ifstream read;
	read.open("Student Report.txt"); 
    string data;
	getline(read,data);
	cout<<data<<endl;
	getline(read,data);
	cout<<data<<endl;
	getline(read,data);
	cout<<data<<endl;
	getline(read,data);
	cout<<data<<endl;
	read.close();
	
getch();
return 0;

}

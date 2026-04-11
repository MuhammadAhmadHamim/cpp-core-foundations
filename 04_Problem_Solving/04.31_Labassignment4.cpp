#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
struct Student{
	string name;
	int age;
	float CGPA;
	string uni;
};

Student s[10];
void inputData(){
	for(int i=0;i<10;i++){
		cout<<"Enter the name of student:\n";
		getline(cin,s[i].name);
		
		cout<<"Enter the age:";
		cin>>s[i].age;
		
		cout<<"Enter the CGPA:";
		cin>>s[i].CGPA;
		
		cout<<"Enter the name of University:\n";
		cin.ignore();
		getline(cin,s[i].uni);
	
	}
}

int main(){
	inputData();
	ofstream write;
	write.open("students.txt");
	
	for(int i=0;i<10;i++){
		write<<"Name:"<<s[i].name<<endl;
	
		write<<"Age:"<<s[i].age<<endl;
	
		write<<"CGPA:"<<s[i].CGPA<<endl;
	
		write<<"University Name:"<<s[i].uni<<endl<<endl;
	}
    
	write.close();
    
	//Question no.2
    ifstream read;
    read.open("students.txt");
	
	for(int i=0;i<10;i++){
		string data;
		getline(read,data);
		cout<<data<<endl;
	
		getline(read,data);
		cout<<data<<endl;
	
		getline(read,data);
		cout<<data<<endl;
	
		getline(read,data);
		cout<<data<<endl<<endl;
	}
	
    read.close();
	getch();
	return 0;
}

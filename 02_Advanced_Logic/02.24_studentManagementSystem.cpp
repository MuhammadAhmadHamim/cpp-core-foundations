#include<iostream>
#include<conio.h>
using namespace std;
//Let's declare a structure containing the required variables
struct Student{
	char name[50];
	int rollNumber;
	float marks[5];
	float average;
	char grade;
};
char calculateGrade(float average);
//Now,The input function that'll input the data from user
void inputStudentData(Student students[],int n){
	for(int i=0;i<n;i++){
	cout<<"Enter the name of student:";
	for(int j=0;j<50;j++){
		cin>>students[i].name[j];
		if(students[i].name[j]=='.'){break;}
		else{continue;}}
	cout<<"Enter the roll Number:";
	cin>>students[i].rollNumber;
	cout<<"Enter the marks of five subjects:";
	for(int j=0;j<5;j++){
	cin>>students[i].marks[j];
	students[i].average+=students[i].marks[j];}
	students[i].average/=5;
	students[i].grade=calculateGrade(students[i].average);}}
//Now,The function to calculate the grade of the student
char calculateGrade(float average){
	if(average>=85){return 'A';}
	else if(average>=70 && average<=84){return 'B';}
	else if(average>=50 && average<=69){return 'C';}
	else{return 'D';}}
//The display function
void displayStudentData(Student students[],int n){
	for(int i=0;i<n;i++){
		cout<<"Name:"<<students[i].name;
		cout<<endl;
		cout<<"Roll Number:"<<students[i].rollNumber<<endl;
		cout<<"Marks:";
		for(int j=0;j<5;j++){
			cout<<students[i].marks[j]<<" ";}
		cout<<endl;
		cout<<"Average:"<<students[i].average<<endl;
		cout<<"Grade:"<<students[i].grade<<endl;}}
//The Topper search
int findTopper(Student students[],int n){
	float max=students[0].average;
	int index=0;
	for(int i=1;i<n;i++){
		if(students[i].average>max){
			max=students[i].average;
			index=i;}
		else{continue;}}
return index;}
//Search by RollNumber Function
void searchByRollNumber(Student students[],int n){
	int flag=0;
	int roll;
	cout<<"Enter the roll number:";
	cin>>roll;
for(int i=0;i<n;i++){
	if(students[i].rollNumber==roll){
		cout<<"Name:";
		cout<<students[i].name;
		cout<<endl;
		cout<<"Roll Number:"<<students[i].rollNumber<<endl;
		cout<<"Marks:";
		for(int j=0;j<5;j++){cout<<students[i].marks[j]<<" ";}
		cout<<endl;
		cout<<"Average:"<<students[i].average<<endl;
		cout<<"Grade:"<<students[i].grade<<endl;
		flag++;
		break;}
	else{continue;}}
if(flag==0){cout<<"Not Found\n";}
else{cout<<"Found\n";}}
//Now,The main function
int main(){
	Student students[2];
	int n=2;
	inputStudentData(students,n);
	displayStudentData(students,n);
	int top;
	top=findTopper(students,n);
cout<<"Name of the topper:";
	cout<<students[top].name;
cout<<endl;
cout<<"Average of the topper:"<<students[top].average<<endl;
searchByRollNumber(students,n);
getch();
return 0;
}

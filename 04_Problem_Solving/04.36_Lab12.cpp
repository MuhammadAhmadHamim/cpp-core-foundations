/*Task1
#include<iostream>
#include<conio.h>
using namespace std;
struct car{
	string model;
	int year;
	float mileage;
};
car data[10];
void inputData(){
	for(int i=0;i<10;i++){
		cout<<"Enter the model of the car:";
		getline(cin,data[i].model);
		
		cout<<"Enter the year of manufacturing:";
		cin>>data[i].year;
		cout<<"Enter the mileage of this car(in km/l):";
		cin>>data[i].mileage;
		cin.ignore();
	}
}
int highestmileage(){
	int top=0;
	for(int i=1;i<10;i++){
		if(data[i].mileage>data[top].mileage){
			top=i;
		}
		else{
			continue;
		}
	}
	return top;
}
int main(){
	inputData();
	int top;
	top=highestmileage();
	cout<<"Car with the Highest mileage:-\n";
	cout<<"____________________________\n";
	cout<<"Model:"<<data[top].model<<endl;
	cout<<"Year of manufacturing:"<<data[top].year<<endl;
	cout<<"Mileage:"<<data[top].mileage<<"km/l"<<endl;
	getch();
	return 0;
}*/
/*Task2
#include<iostream>
#include<conio.h>
using namespace std;
struct movie{
	string title;
	float rating;
	float duration;
};
movie m[4];
void inputData(){
for(int i=0;i<4;i++){
	cout<<"Enter the title of the movie:";
	getline(cin,m[i].title);
	cout<<"Enter the rating of the movie(out of 10):";
	cin>>m[i].rating;
	cout<<"Enter the duration of movie(in minutes):";
	cin>>m[i].duration;
	cin.ignore();
}
}
int best(){
int top=0;
for(int i=0;i<4;i++){
	if(m[i].rating>m[top].rating){
		top=i;
	}
	else{
		continue;
	}
}
return top;
}
int main(){
	inputData();
	int top=best();
	cout<<"Most rated movie:-"<<endl;
	cout<<"________________"<<endl;
	cout<<"Name:"<<m[top].title<<endl;
	cout<<"Rating:"<<m[top].rating<<endl;
	cout<<"Duration:"<<m[top].duration<<"min"<<endl;
	getch();
	return 0;
}*/
/*Task3
#include<iostream>
#include<conio.h>
using namespace std;
int arr[5];
void inputData(){
	for(int i=0;i<5;i++){
		cout<<"Enter the element of array:";
		cin>>arr[i];
	}
}
float calculateSum(){
	float total=0;
	for(int i=0;i<5;i++){
		total+=arr[i];
	}
	return total;
}
float calculateAverage(float sum){
	float average=sum/5;
	return average;
}
void sortArray(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i;j++){
			if(arr[j]<arr[j+1]){
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			else{
				continue;
			}
		}
}
}
int main(){
	inputData();
	float sum;
	sum=calculateSum();
	cout<<"The sum of elements of the array is "<<sum<<endl;
	float average;
	average=calculateAverage(sum);
	cout<<"The average of the elements is "<<average<<endl;
	sortArray();
	cout<<"The sorted array:";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}*/
/*Task4
#include<iostream>
#include<conio.h>
using namespace std;
int arr[10];
void inputElements(){
	for(int i=0;i<10;i++){
		cout<<"Enter the element of array:";
		cin>>arr[i];
	}
}
int findMax(){
	int max=arr[0];
	for(int i=1;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		else{
			continue;
		}
	}
	return max;
}
void sortArray(){
	for(int i=0;i<10;i++){
		int temp;
		for(int j=0;j<10-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			else{
				continue;
			}
		}
	}
}
int main(){
	inputElements();
	int max;
	max=findMax();
	cout<<"The maximum number entered is "<<max<<endl;
	cout<<"The sorted array: ";
	sortArray();
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}*/
/*Task5
#include<iostream>
#include<conio.h>
using namespace std;
struct Student{
	char name[50];
	int rollNumber;
	float marks[5];
	float average;
	char grade;
};
char calculateGrade(float average);
void inputStudentData(Student students[],int n){
	for(int i=0;i<n;i++){
		cout<<"Enter the name of student(fullstop to end):";
		for(int j=0;j<50;j++){
			cin>>students[i].name[j];
		if(students[i].name[j]=='.'){
			break;
		}
		else{
			continue;
		}
		}
		cout<<"Enter the rollNumber of the student:";
		cin>>students[i].rollNumber;
		float sum;
		cout<<"Enter the marks of student in five subjects:";
		for(int j=0;j<5;j++){
			cin>>students[i].marks[j];
			sum+=students[i].marks[j];
		}
		students[i].average=sum/5;
		students[i].grade=calculateGrade(students[i].average);
	}
}
char calculateGrade(float average){
	if(average>=85){
		return 'A';
	}
	else if(average>=70 && average<=84){
		return 'B';
		}
	else if(average>=50 && average<=69){
		return 'C';
	}
	else{
		return 'D';
	}
}
void displayStudentData(Student students[],int n){
	for(int i=0;i<n;i++){
		cout<<"Name:"<<students[i].name<<endl;
		cout<<"rollNumber:"<<students[i].rollNumber<<endl;
		cout<<"Marks in five subjects:";
		for(int j=0;j<5;j++){
			cout<<students[i].marks[j]<<" ";
		}
		cout<<endl;
		cout<<"Average:"<<students[i].average<<endl;
		cout<<"Grade:"<<students[i].grade<<endl;
	}
}
int findTopper(Student students[],int n){
	int top=0;
	for(int i=1;i<n;i++){
	   if(students[i].average>students[top].average){
	   	top=i;
	   }
	   else{
	   	continue;
	   }
	}
	return top;
}
void searchByRollNumber(Student students[],int n,int roll){
	int count=0;
	for(int i=0;i<n;i++){
		if(students[i].rollNumber==roll){
		cout<<"Name:"<<students[i].name<<endl;
		cout<<"rollNumber:"<<students[i].rollNumber<<endl;
		cout<<"Marks in five subjects:";
		for(int j=0;j<5;j++){
			cout<<students[i].marks[j]<<" ";
		}
		cout<<endl;
		cout<<"Average:"<<students[i].average<<endl;
		cout<<"Grade:"<<students[i].grade<<endl;
		count++;
		break;	
		}
		else{
			continue;
		}
	}
	if(count!=0){
		cout<<"Found!"<<endl;
	}
	else{
		cout<<"Not Found!"<<endl;
	}
}
int main(){
	Student students[2];
	int n=2;
	inputStudentData(students,n);
	displayStudentData(students,n);
	int top;
	top=findTopper(students,n);
	cout<<"The Data of Topper is given by,\n";
	cout<<"Name:"<<students[top].name<<endl;
		cout<<"rollNumber:"<<students[top].rollNumber<<endl;
		cout<<"Marks in five subjects:";
		for(int j=0;j<5;j++){
			cout<<students[top].marks[j]<<" ";
		}
		cout<<endl;
		cout<<"Average:"<<students[top].average<<endl;
		cout<<"Grade:"<<students[top].grade<<endl;
		int roll;
		cout<<"Enter the rollNumber you want to search:";
		cin>>roll;
		searchByRollNumber(students,n,roll);
		getch();
		return 0;
}*/
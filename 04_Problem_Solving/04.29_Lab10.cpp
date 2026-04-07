/*Task1

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[5];
	
	for(int i=0;i<5;i++){
		cout<<"Enter the element of array:";
		cin>>a[i];
	}
	
	cout<<"Un-sorted array={";
	
	for(int i=0;i<5;i++){
		cout<<a[i];
		
		if(i!=4){
			cout<<" , ";
		}

		else{
			cout<<"}\n";
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
			else{
			continue;
			}
		}
	}

	cout<<"Sorted array={";
	
	for(int i=0;i<5;i++){
		cout<<a[i];
		if(i!=4){
			cout<<" , ";
		}

		else{
			cout<<"}";
		}
	}
	getch();
	return 0;
}*/

/*Task2
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[5];
	
	for(int i=0;i<5;i++){
		cout<<"Enter the element of array:";
		cin>>a[i];
	}
	
	for(int i=0;i<4;i++){
		
		for(int j=0;j<4-i;j++){
			
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		
			else{
				continue;
			}
		}
	}

	int num;
	int count=0;
	
	cout<<"Enter the number you want to find:";
	cin>>num;
	
	int l=0;
	int r=4;
	int mid;
	
	for(int i=0;i<5;i++){
		mid=(l+r)/2;
		
		if(a[mid]>num){
			r--;
		}

		else if(a[mid]<num){
			l++;
		}

		else if(a[mid]=num){
			count++;
			break;
		}

		else{
			continue;
		}
	}
	
	if(count !=0){
    	cout<<"Number found in array upon a["<<mid<<"]"<<endl;
	}

	else{
		cout<<"Not Found!\n";
	}

	getch();
	return 0;
}*/

/*Task3
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int std[4][3];
	int m1=0;
	int m2=0;
	int m3=0;
	int m4=0;
	
	for(int i=0;i<4;i++){
		cout<<"Marks for student "<<i+1<<":-"<<endl;
		for(int j=0;j<3;j++){
			
			cout<<"Subject "<<j+1<<":";
			cin>>std[i][j];
			
			if(i==0){
				m1+=std[i][j];
			}
			
			else if(i==1){
				m2+=std[i][j];
			}
			
			else if(i==2){
				m3+=std[i][j];
			}
			
			else if(i==3){
				m4+=std[i][j];
			}
			
			else{
				continue;
			}
		}
	}
	
	cout<<"Total marks of 1st student:"<<m1<<endl;
	cout<<"Total marks of 2nd student:"<<m2<<endl;
	cout<<"Total marks of 3rd student:"<<m3<<endl;
	cout<<"Total marks of 4th student:"<<m4<<endl;
	
	getch();
	return 0;
}*/
/*Task4
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int p[4][3];
	int s1=0;
	int s2=0;
	int s3=0;
	
	for(int i=0;i<3;i++){
		cout<<"Sale of product "<<i+1<<":"<<endl;
		
		for(int j=0;j<4;j++){
			cout<<"In "<<j+1<<" month:";
			cin>>p[j][i];
			
			if(i==0){
				s1+=p[j][i];
			}

			else if(i==1){
				s2+=p[j][i];
			}

			else if(i==2){
				s3+=p[j][i];
			}

			else{
				continue;
			}
		}	
	}
	
	cout<<"Total sales of 1st product:"<<s1<<endl;
	cout<<"Total sales of 2nd product:"<<s2<<endl;
	cout<<"Total sales of 3rd product:"<<s3<<endl;
	
	getch();
	return 0;
}*/
/*Task5
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int std[4][3];
	int m1=0;
	int m2=0;
	int m3=0;
	int m4=0;
	
	for(int i=0;i<4;i++){
		cout<<"Marks for student "<<i+1<<":-"<<endl;
		
		for(int j=0;j<3;j++){
			
			cout<<"Subject "<<j+1<<":";
			cin>>std[i][j];
			
			if(i==0){
				m1+=std[i][j];
			}
			
			else if(i==1){
				m2+=std[i][j];
			}
			
			else if(i==2){
				m3+=std[i][j];
			}
			
			else if(i==3){
				m4+=std[i][j];
			}
			
			else{
				continue;
			}
		}
	}

	cout<<"Total marks of 1st student:"<<m1<<endl;
	cout<<"Total marks of 2nd student:"<<m2<<endl;
	cout<<"Total marks of 3rd student:"<<m3<<endl;
	cout<<"Total marks of 4th student:"<<m4<<endl;
	
	if(m1>m2 && m1>m3 && m1>m4){
		cout<<"The student with highest marks of "<<m1<<" is 1st student\n";
	}

	else if(m2>m1 && m2>m3 && m2>m4){
		cout<<"The student with highest marks of "<<m2<<" is 2nd student\n";
	}

	else if(m3>m1 && m3>m2 && m3>m4){
		cout<<"The student with highest marks of "<<m3<<" is 3rd student\n";
	}

	else if(m4>m1 && m4>m3 && m4>m2){
		cout<<"The student with highest marks of "<<m4<<" is 4th student\n";
	}

	getch();
	return 0;
}*/
/*Task6
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[4][3];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter the element of array:";
			cin>>a[i][j];}
		}
		
		int num;
	
		cout<<"Enter the number you want to find:";
		cin>>num;
	
		int count=0;
		int rows;
		int columns;
	
		for(int i=0;i<4;i++){
			for(int j=0;j<3;j++){
				if(a[i][j]==num){
					rows=i;
					columns=j;
	        		count++;	

					break;
				}
		
				else{
					continue;
				}
			}
		}

	if(count==0){
		cout<<"Not Found\n";
	}

	else{
		cout<<"Position is:-\n";
		cout<<"rows: "<<rows<<endl;
		cout<<"columns: "<<columns<<endl;
	}

	getch();
	return 0;
}*/
/*Task7
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int std[4][3];
	int count=0;
	
	for(int i=0;i<4;i++){
		cout<<"Marks for student "<<i+1<<":-"<<endl;
		
		for(int j=0;j<3;j++){
			cout<<"Subject "<<j+1<<":";
			cin>>std[i][j];
			
			if(std[i][j]==0){
				count++;
			}

			else{
				continue;
			}
		}
	}

	cout<<"The number of times students have scored zero marks is "<<count<<endl;

	getch();
	return 0;
}*/
/*Task8
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[3][3];
	int pd=0;
	int sd=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			cout<<"Enter the elements of array:";
			cin>>a[i][j];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			if(i==j){
				cout<<a[i][j]<<" ";
				pd+=a[i][j];
			}
		
			else{
				cout<<"*"<<" ";
			}
		
		}
		
		cout<<endl;
	}
	
	cout<<"The sum of Primary diagonal is "<<pd<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i+j==2){
				cout<<a[i][j]<<" ";
				sd+=a[i][j];
			}
		
			else{
				cout<<"*"<<" ";	
			}
		}
		cout<<endl;
	}
	
	cout<<"The sum of Secondary diagonal is "<<sd<<endl;
	
	getch();
	return 0;
}*/
/*Task9
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter the elements of first matrix:";
			cin>>a[i][j];
		}
	}

	int b[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter the elements of second matrix:";
			cin>>b[i][j];
		}
	}

	int c[3][3];
	cout<<"The sum of both matrix is:\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}

	getch();
	return 0;
}*/
/*Task10
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter the element of your matrix:";
			cin>>a[i][j];
		}
	}

	cout<<"The original matrix:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	int at[3][3];
	
	cout<<"The transpose of the original matrix:\n";
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			at[j][i]=a[i][j];
			cout<<at[j][i]<<" ";
		}
		cout<<endl;
	}
getch();
return 0;
}*/
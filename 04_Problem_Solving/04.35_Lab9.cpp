/*Task1
#include<iostream>
#include<conio.h>
using namespace std;
int main() {
		 int a[6];
	for(int i=0;i<6;i++){
	  cout<<"Enter the number of hours of work:";
		       	               cin>>a[i];
			   }
			            getch();
			                     return 0;
}*/
/*Task2
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	   int a[10];
	      int count=0;
	      for(int i=0;i<10;i++){
	      	   cout<<"Enter the element of array:";
				cin>>a[i];
				 if(a[i]>=10){
                  count++;
				 }
				             else{
				             	            continue;
							 }
		  }
		   cout<<"The number of elements greater than or equal to 10 are "<<count<<endl;
		         getch();
		               return 0;
}*/
/*Task3
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[4];
	   for(int i=0;i<4;i++){
	   	   cout<<"Enter the elemnt of array:";
	   	         cin>>a[i];

	   }
	      cout<<"Before swapping:"<<endl;
	      cout<<"[";
	         for(int i=0;i<4;i++){
	         	    cout<<a[i]<<" ";
			 }
			          cout<<"]"<<endl;
	int temp;
	   temp=a[0];
	      a[0]=a[3];
	         a[3]=temp;
	            cout<<"After swapping:"<<endl;
	      cout<<"[";
	         for(int i=0;i<4;i++){
	         	    cout<<a[i]<<" ";
			 }
			          cout<<"]"<<endl;
			                   getch();
			                            return 0;
}*/
/*Task4
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[6];
	int product=1;
	   for(int i=0;i<6;i++){
	   	   cout<<"Enter the element of array:";
	   	         cin>>a[i];
				  product*=a[i];
	   }
	      cout<<"The product of the array elements is "<<product<<endl;
	         getch();
	            return 0;
}*/
/*Task5
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10];
	   int count1=0;
	      int count2=0;
	   for(int i=0;i<10;i++){
	   	   cout<<"Enter the element of array:";
	   	         cin>>a[i];
	   	        if(a[i]%2==0){
	   	        	      count1++;
				   }
				               else{
				               	            count2++;
							   }
	   }
		cout<<"The number of even elements in this array are "<<count1<<endl;
                 		cout<<"The number of odd elements in this array are "<<count2<<endl;
			   getch();
			            return 0;
}*/
/*Task6
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[6];
	   int b[6];
	      for(int i=0;i<6;i++){
				 cout<<"Enter the element of array:";
				 cin>>a[i];
		  }
		         cout<<"a=[";
	         for(int i=0;i<6;i++){
	         	    cout<<a[i]<<" ";
			 }
			          cout<<"]"<<endl;
		for(int j=0;j<6;j++){
			      b[j]=a[j];
		}
		       cout<<"b=[";
	         for(int k=0;k<6;k++){
	         	    cout<<b[k]<<" ";
			 }
			          cout<<"]"<<endl;


getch();
return 0;}*/
/*Task7
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num;
int a[15]={5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75};
cout<<"Enter any number:";
cin>>num;
int count=0;
for(int i=0;i<15;i++){
	if(num==a[i]){
		   count++;
	}
	   else{
	   	   continue;
	   }
}
 if(count==0){
 	cout<<"Not Found\n";
 }
 else{
 	cout<<"Found\n";
}
getch();
return 0;
}*/
/*Trash

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int min;
	  int max;
	   	    int a[8];
       for(int i=0;i<8;i++){
	cout<<"Enter the elements:";
	       cin>>a[i];

		 }
	     min=a[0];
	       max=a[0];
	      for(int i=1;i<8;i++){
	    if(a[i]>max){
	         max=a[i];
		}
	          else if(a[i]<min){
	 min=a[i];

	 }
  else{
	 continue;
}
}
cout<<"The maximum number is: "<<max<<endl;
cout<<"The minimum number is: "<<min<<endl;
getch();
return 0;
}*/
/*Task8


#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[100];
	   int sum=0;
	   for(int i=0;i<100;i++){
	   	   a[i]=i;
	   	         sum+=a[i];
	   }
	      cout<<"Sum: "<<sum<<endl;
    getch();
	return 0;
}*/

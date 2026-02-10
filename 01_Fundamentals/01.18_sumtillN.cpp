#include <iostream>
#include <conio.h>
using namespace std;

int main() {
int N;
int sum = 0;
cout<<"Enter the value till whom you wanna print the sum of numbers from 1:";
cin>>N;
for(int i=1 ; i<=N; i+=1)
{
	
	cout<<"Adding "<<i<<" to the current sum which is "<<sum<<" it becomes "<<sum+i<<endl;
	sum+=i;
}
cout<<"The final sum of even numbers from 1 to "<<N<<" is "<<sum<<endl;
	getch();
return 0;
}

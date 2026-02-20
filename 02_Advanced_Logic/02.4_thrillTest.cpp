#include <iostream>
#include<conio.h>
using namespace std;
int main() {
    int age, height;
    bool hasAdult;
    cout<<"Enter your'e age"<<endl;
    std::cin >> age; 
	cout<<"Enter your'e height(in cm)"<<endl;
	std::cin >> height; 
	cout<<"Type 1,if your'e accompained by an adult and 0,if not"<<endl;
	std::cin >> hasAdult; // Don't change this line

    // Write your code below
        if(height<=150){
cout<<"Sorry, you are not tall enough\n";}
else{
    if(age<12){
    cout<<"Sorry, you are too young\n";
}
else{
if(age<15 && height>=150 && !hasAdult){
cout<<"Sorry, you need an adult with you\n";}
else if(age<15 && height>=150 && hasAdult){
cout<<"You can ride with adult supervision!\n";}
else if(age>=15 && height>=150){
cout<<"You can ride by yourself!\n";
}
}
}
return 0;
}

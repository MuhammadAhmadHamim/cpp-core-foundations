#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

bool is_valid( string username , string password) {
    // Write your code below
    if(username=="user" && password== "qwerty"){return true;
			 }
   	else if(username== "admin"){return true;}
             	
    else{
			 	return false;
			 } 
             
}
int main() {
    string user, pass;
    cout<<"Enter your Username:";
    cin >> user;
    cout<<"Enter your password:";
    cin >> pass;
    bool res = is_valid(user, pass);
     if(res==1 && user=="admin"){
    	cout<<"Welcome Admin!"<<endl;}
    else if(res==1 && user=="user"){
    cout <<"You have a "<<boolalpha<<res<<" & functioning account";}
	else{
    cout <<boolalpha<<res<<" info,You do not have any account";}
    getch();
    return 0;
}

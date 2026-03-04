#include<iostream>
#include<conio.h>
#include<string>
#include<cctype>
using namespace std;
int checkPassword(string password , int size){
    int uppercheck=1;
    int lowercheck=1;
    int digitcheck=1;
    int spacecheck=0;
    int charcheck=1;
    for(int i=0;i<size;i++){
        char letter;
     letter=password[i];
        if(isupper(letter))
        {
            uppercheck=0;
        }
        else if(isdigit(letter))
        {
            digitcheck=0;
        }
        else if(islower(letter))
        {
          lowercheck=0;
        }
        else if(isspace(letter))
        {
          spacecheck++;
        }
        else if(!isalpha(letter) && !isspace(letter) && !isdigit(letter)){
            charcheck=0;
        }
            else{continue;}
    }
    if(size<8){        
        return 0;
    }
    else if(uppercheck !=0){
        return 1;
    }
    else if(lowercheck !=0){
        return 2;
    }
    else if(digitcheck !=0){
        return 3;
    }
    else if(spacecheck !=0){
        return 4;
    }
    else if(charcheck !=0){
        return 5;
    }
    else if(size>=8 && size<=10){
        return 6;
    }
    else if(size>10 && size<=15){
        return 7;
    }
    else if(size>=16){
        return 8;
    }
    else{
    	return -1;
	}
}
int main(){
    while(true){
    string password;
    cout<<"Enter password:";
    getline(cin,password);
    int size;
    size=password.length();
    int check;
    check=checkPassword(password , size);
    if(check==0){
        cout<<"Password must contain 8 characters\n";
    }
    else if(check==1){
        cout<<"Password must contain an upper-case letter\n";
    }
    else if(check==2){
        cout<<"Password must contain a lower-case letter\n";
    }
    else if(check==3){
        cout<<"Password must contain a digit\n";
    }
    else if(check==4){
        cout<<"Password must not contain spaces\n";
    }
    else if(check==5){
        cout<<"Password must contain a special character\n";
    }
    else if(check==6){
        cout<<"Password is weak!\n";
        break;
    }
    else if(check==7){
        cout<<"Password is strong!\n";
        break;
    }
    else if(check==8){
        cout<<"Password is very strong!\n";
        break;
    }
}
    getch();
    return 0;
}

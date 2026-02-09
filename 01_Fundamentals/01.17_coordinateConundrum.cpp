#include <iostream>
#include<conio.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number who's coordinates you want"<<endl;  
    cin >> n;
    // Write your code below
for(int i=n-1;i>0;){
    for(int j=1;j<n;j++){
        
        cout<<"("<<j <<","<<i<<")"<<endl;
        i--;
    }
}
    getch();
    return 0;
}

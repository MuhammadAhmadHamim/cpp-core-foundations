#include <iostream>
#include <string>
using namespace std;
void printNTimes(string message, int n) {
    // Write you code here
    for(int i=1 ; i<=n ; i++){
    cout<<message<<endl;
    }
}

int main() {
    string msg;
    int n;
    cout<<"Enter the message you want to print"<<endl;
    getline(std::cin, msg); 
    cout<<"Enter the number of times you want the message to print out"<<endl;
    cin >> n;
cout<<endl;
    printNTimes(msg, n);
    system("pause");
    return 0;
}

#include <iostream> 
#include <string>
#include<cctype>
using namespace std;
void stringSearchOperations(string str) {
    // Find first space
     int size=str.size();
     int space=str[0];
     int pos=str.find(" ");    
    
	   cout<<"Space Found At: "<<pos<<endl;
    // Erase 4 characters from position 5
     string erase=str.erase(5 , 4);
     cout<<"After erase: "<<erase<<endl;
    // Check if contains "You"
         for(int i=0 ; i <str.size() ; i++){
         	str[i]=tolower(str[i]);
		 }
		 int you= str.find("you");
         cout<<"Contains You: ";
         if(you != string::npos){
         	cout<<"Found";
		 }
		 else{
		 	cout<<" Not Found";
		 }
         cout<<endl;
    // Clear string and check if empty
    str.clear();
    bool result= str.empty();
    cout<<"Is Empty: "<<boolalpha<<result<<endl;
}

int main() {
    string str;
    getline(cin, str);
    stringSearchOperations(str);
    return 0;
}

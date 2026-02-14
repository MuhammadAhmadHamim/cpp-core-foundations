#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
int main() {
    // Create the shoppingList array here
    string shoppingList[] = {"bread" , "eggs" , "milk" , "butter"};
    
    // Don't change the code below
    cout << "Shopping List:" <<std::endl;
    for (int i = 0; i < sizeof(shoppingList)/sizeof(shoppingList[0]); i++) {
        cout << shoppingList[i] <<endl;
    }
    system("pause");
    return 0;
}

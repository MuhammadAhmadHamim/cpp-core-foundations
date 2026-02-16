#include <iostream>
#include<conio.h>
int main() {
    int n;
    int i=0;
    std::cout << "Enter the number of elements of array:\n";
    std::cin >> n;
    std::cin.ignore();
    std::string arr[n];
    
    for (int i = 0; i < n; i++) {
        std::string val;
        std::cout << "Enter the element of array:\n";
        std::cin >> val;
        arr[i] = val;
    }
    
    // Print the array beautifully
    std::cout << std::endl;
    std::cout<<"The beautifully printed Array = ";
    std::cout << "{" ;
    while(i>=0){
        std::cout <<arr[i];
        if(i < n-1){
            std::cout << ", ";
            i++;
        }
        else{
            std::cout <<"}"<<std::endl;
            break;
        }
    }
    getch();
    return 0;
}

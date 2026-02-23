#include <iostream>
#include <vector>
#include<conio.h>
using namespace std;
double prod(double arr[], int size) {
    // Write your code below
     double product=1;
    for(int i=0;i<size;i++){
    
	product*=arr[i];
    }
    return product;
}
int main() {
    int n;

    cin >> n;

    double* arr=new double[n];

    for (int i = 0; i < n; i++) {
        cin >>arr[i];
    }

    double result = prod(arr, n);
    cout << "Product of array elements: " << result <<endl;
    delete[] arr;
    getch();
    return 0;
}

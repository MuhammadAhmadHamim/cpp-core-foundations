#include <iostream>
#include<conio.h>
using namespace std;
double* calculateStats(double arr[], int size) {
    double sum = 0;
    double average = 0;
    double max = arr[0];
    double min = arr[0];
    // Write your code here
    for(int i=0; i<size ; i++){
        sum+=arr[i];
    }
    average = sum/size;

    for(int i=0; i<size ; i++){
        if(arr[i]> max){
            max=arr[i];
        }
    }
    for(int i=0; i<size ; i++){
        if(arr[i]< min){
            min=arr[i];
        }
    }

    double* newArr = new double[4];
    newArr[0] = sum;
    newArr[1] = average;
    newArr[2] = max;
    newArr[3] = min;
    return newArr;
}

int main() {
    int n;
cout<<"Enter the length of array"<<endl;
    cin >> n;
    double* arr=new double[n];

    for (int i = 0; i < n; i++) {
        cout<<"Enter the element of array"<<endl;
        cin >> arr[i];
    }
cout<<endl;
    double* stats = calculateStats(arr, n);
    cout << "The Sum of given elements: " << stats[0] <<endl;
    cout << "The Average of given elements: " << stats[1] <<endl;
    cout << "The Maximum of given elements: " << stats[2] <<endl;
    cout << "The Minimum of given elements: " << stats[3] <<endl;
    delete[] arr;
    delete[] stats;
    getch();
    return 0;
}

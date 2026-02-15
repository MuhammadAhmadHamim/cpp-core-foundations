#include <iostream>
#include<conio.h>
using namespace std;
void values(int arr[], int size) {
    int i=0;
	while(i>=0) {
        // Write code here
        if(i < size){
        cout<< arr[i]<<endl;
        i++;}
        else{
        	break;
		}
    }

}

int main() {
    int numbers[] = {109, 4, 7, 19, 57, 216, 68, 89, 132, 63};
    int Size =sizeof (numbers)/sizeof(numbers[0]);
    values(numbers, Size);
    getch();
    return 0;
}

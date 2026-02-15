#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int index;
    string newElement;
    cout<<"Enter the number of elements of your array"<<endl;
    cin >> n;
    cout<<"Enter the index of element of Loop you wanna replace"<<endl;
    cin >> index;
    cout<<"Enter the new element"<<endl;
    cin.ignore();
    getline(std::cin, newElement);
    string arr[n];

    // Use n, index, arr and newElement to solve the problem
    
    for (int i = 0; i < n; i++) {
        // Populate arr
        string elements;
        cout<<"Enter the element of array"<<endl;
        cin>> elements;
        arr[i] = elements;
    }
    cout<<"Unmodified Array: {";
    for(int i = 0;i<n;i++){cout<<arr[i];
    if(i<n-1){cout<<" , ";
	}
	else{
		cout<<"}"<<endl;
	}
	}
    // Modify arr
    arr[index] = newElement;
    // print arr
    int j=1;
    int k=0;
    cout<<"Modified array: {";
    while(j>=0){
    	j++;
    	
        cout<<arr[k];
        k++;
        if(k<sizeof(arr)/sizeof(arr[0])){
        	cout<<" , ";
        }
        else{
        	cout<<"}"<<endl;
        	break;
		}
    }
    system("pause");
    return 0;
}

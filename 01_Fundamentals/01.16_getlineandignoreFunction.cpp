#include <iostream>
#include <limits>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;

    // Uncomment to see the difference
    cin.ignore();

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << ", you are " << age << " years old!" << endl;
    system("pause");
    return 0;
}


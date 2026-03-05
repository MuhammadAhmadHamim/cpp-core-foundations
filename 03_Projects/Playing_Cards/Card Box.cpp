#include <iostream>
#include <conio.h>
#include <windows.h>
#include <locale>
using namespace std;

void printcard() {
    // Set console code page to UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // Set the C-style locale (for functions like setlocale)
    setlocale(LC_ALL, "");

    // Set C++ wide stream locale
    wcout.imbue(locale(""));

    // Use wide character output
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;


}

int main() {
    printcard();
    getch(); // Keeps the console window open
    return 0;
}


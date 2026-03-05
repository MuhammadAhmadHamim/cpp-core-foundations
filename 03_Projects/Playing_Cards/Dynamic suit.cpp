#include <iostream>
#include <conio.h>
#include <windows.h>
#include <locale>
using namespace std;

void printcard(string type) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Get console handle
    // Set console code page to UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // Set the C-style locale (for functions like setlocale)
    setlocale(LC_ALL, "");


    
    // Set C++ wide stream locale
    wcout.imbue(locale(""));
    // Use wide character output
    if(type=="heart" || type=="hearts" || type=="Heart" || type=="Hearts"){
        SetConsoleTextAttribute(hConsole,12);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" A       " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2665"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"       A " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type=="club" || type=="clubs" || type=="Club" || type=="Clubs"){
        SetConsoleTextAttribute(hConsole,7);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" A       " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2663"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"       A " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type=="spade" || type=="spades" || type=="Spade" || type=="Spades"){
        SetConsoleTextAttribute(hConsole,7);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" A       " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2660"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"       A " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type=="diamond" || type=="diamonds" || type=="Diamond" || type=="Diamonds"){
        SetConsoleTextAttribute(hConsole,12);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" A       " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2666"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"       A " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else{
        cout<<"Failed,due to Invalid Input!"<<endl;
        wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
        wcout << L"\u2551" <<" A       " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"       A " <<L"\u2551"<<endl;
        wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;

    }


}

int main() {
    string input;
    cout<<"Enter the type of suit you want:";
    cin>>input;
    printcard(input);
    getch();    // Keeps the console window open
    return 0;
}
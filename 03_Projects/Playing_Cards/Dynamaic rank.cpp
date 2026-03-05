#include <iostream>
#include <conio.h>
#include <windows.h>
#include <locale>
using namespace std;
void CardBox(string type[] , wstring rank[], int num){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Get console handle
    // Set console code page to UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // Set the C-style locale (for functions like setlocale)
    setlocale(LC_ALL, "");


    
    // Set C++ wide stream locale
    wcout.imbue(locale(""));
    // Use system function to change colour
    for(int i=0;i<num;i++){
        if(rank[i] !=L"10 "){
    if(type[i]=="heart" || type[i]=="hearts" || type[i]=="Heart" || type[i]=="Hearts"){
        SetConsoleTextAttribute(hConsole,12);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" "<<rank[i]<<"       " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2665"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"       "<<rank[i]<<" " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type[i]=="club" || type[i]=="clubs" || type[i]=="Club" || type[i]=="Clubs"){
        SetConsoleTextAttribute(hConsole,7);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" "<<rank[i]<<"       " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2663"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"       "<< rank[i] <<" " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type[i]=="spade" || type[i]=="spades" || type[i]=="Spade" || type[i]=="Spades"){
        SetConsoleTextAttribute(hConsole,7);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" "<<rank[i]<<"       " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2660"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"       "<<rank[i]<<" " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type[i]=="diamond" || type[i]=="diamonds" || type[i]=="Diamond" || type[i]=="Diamonds"){
        SetConsoleTextAttribute(hConsole,12);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" "<<rank[i]<<"       " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2666"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"       "<<rank[i]<<" " <<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else{
        cout<<"Failed,due to Invalid Input!"<<endl;
        wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
        wcout << L"\u2551" <<" "<<rank[i]<<"       " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"       "<<rank[i]<<" " <<L"\u2551"<<endl;
        wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;

    }
}
else{
    if(type[i]=="heart" || type[i]=="hearts" || type[i]=="Heart" || type[i]=="Hearts"){
        SetConsoleTextAttribute(hConsole,12);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" "<<rank[i]<<"     "<<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2665"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"      "<<rank[i]<<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type[i]=="club" || type[i]=="clubs" || type[i]=="Club" || type[i]=="Clubs"){
        SetConsoleTextAttribute(hConsole,7);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" "<<rank[i]<<"     "<<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2663"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"      "<<rank[i]<<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type[i]=="spade" || type[i]=="spades" || type[i]=="Spade" || type[i]=="Spades"){
        SetConsoleTextAttribute(hConsole,7);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" "<<rank[i]<<"     "<<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2660"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"      "<<rank[i]<<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else if(type[i]=="diamond" || type[i]=="diamonds" || type[i]=="Diamond" || type[i]=="Diamonds"){
        SetConsoleTextAttribute(hConsole,12);
    wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
    wcout << L"\u2551" <<" "<<rank[i]<<"     "<<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"    "<<L"\u2666"<<"    " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
    wcout << L"\u2551" <<"      "<<rank[i]<<L"\u2551"<<endl;
    wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;
    }
    else{
        cout<<"Failed,due to Invalid Input!"<<endl;
        wcout << L"\u2554" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2557"<<endl;
        wcout << L"\u2551" <<" "<<rank[i]<<"     "<<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551" <<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"         " <<L"\u2551"<<endl;
        wcout << L"\u2551" <<"      "<<rank[i]<<L"\u2551"<<endl;
        wcout << L"\u255A" << L"\u2550" << L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550"<< L"\u2550" << L"\u2550" << L"\u255D" <<endl;

    }
}

    cout<<endl;
    }
}
int main(){
    system("color 2F");
    int num;
    cout<<"Enter the number of cards you want:";
    cin>>num;
    cout<<endl;
    wstring* RANK =new wstring[num];
    string* input=new string[num];
    int* number=new int[num];
    for(int i=0;i<num;i++){
    cout<<"Enter the number you want:";
    cin>>number[i];
    cout<<endl;
    cout<<"Enter the type of suit you want:";
    cin>>input[i];
    cout<<endl;}
    for(int i=0;i<num;i++){
    if(number[i]==1){RANK[i]=L"A";}
else if(number[i]>1 && number[i]<10){RANK[i] =to_wstring(number[i]);}
else if(number[i]==10){RANK[i]=L"10 ";}
else if(number[i]==11){RANK[i]=L"J";}
else if(number[i]==12){RANK[i]=L"Q";}
else if(number[i]==13){RANK[i]=L"K";}
else {RANK[i]= L" ";}}
CardBox(input , RANK ,num);
delete[] input;
delete[] RANK;
delete[] number;    
getch();
    return 0;
}
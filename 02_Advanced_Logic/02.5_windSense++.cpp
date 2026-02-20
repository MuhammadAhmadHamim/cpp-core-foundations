#include <iostream>

int main() {
    int wind;
    std::cout<<"Enter the recorded Wind speed in the area:";
    std::cin >> wind; // Don't change this line
    std::string status = "unset";
    // Type your code below
    if(wind<8){
      status = "Calm";
    }
    else if(wind>=8 && wind<=31){
      status = "Breeze";
    }
    else if(wind>=32 && wind<=63){
      status = "Gale";
    }
    else{
      status = "Storm";
    }
    // Don\'t change the line below
    std::cout << "status = " << status;
    	system("pause");
    return 0; 
}

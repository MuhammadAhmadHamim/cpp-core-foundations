#include<iostream>
#include<string>
using namespace std;
int main()
{
	 // Initialize variables
 bool isSunny;
 double windSpeed;
 double temperature;
 double solarPanelOutput;
  bool isCloudy;
    
    //Take the inputs from user
    cout<<"Is it sunny?If yes,Type 1 or else 0"<<endl;
    cin>>isSunny;
    cout<<"What is the Wind speed?"<<endl;
    cin>>windSpeed;
    cout<<"How much does Solar panels produce?"<<endl;
    cin>>solarPanelOutput;
    cout<<"What is the temperature?"<<endl;
    cin>>temperature;
    cout<<"Is the Weather cloudy?If yes,Type 1 or else 0"<<endl;
    cin>>isCloudy;
    // The complete logical expression
    bool result = (isSunny != 0 && windSpeed<10) && (solarPanelOutput<15 && temperature>20 || isCloudy!= 1);
    
    // Print results
    cout << "1. Is it sunny? "<< isSunny <<endl;
    cout << "2. Is wind speed safe? " << (windSpeed < 10) <<endl;
    cout << "3. Do panels produce less? " << (solarPanelOutput < 15) <<endl;
    cout << "4. Is temperature good OR no clouds? " << (temperature > 20 || !isCloudy) <<endl;
    cout << "5. Final result: " << result <<endl;
    cout<<"If the final result is 1 then it's a good day for solar panel production otherwise it's not"<<endl;

	system("pause");
	return 0;
}

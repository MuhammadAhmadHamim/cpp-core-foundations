#include<iostream>
#include<string>
using namespace std;
int main(){
  string coddy ="I am learning to code with Coddy!";

  cout<<"Coddy = "<<"\""<<"I am learning to code with Coddy!"<<"\""<<endl;

  char initial = 'C';

  cout<<"initial = "<<"'"<<initial<<"'"<<endl;
  
  string invalidNumber = "123"; // Ensure this is a valid numeric string
  int number = stoi(invalidNumber);

  string decimalText = to_string(45.67);
  double decimal = stod(decimalText);
  cout<<number<<endl;
  cout<<decimal<<endl;

  int count = 0;
    
  // Type your code below
  count++;
  ++count;
  ++count;
  ++count;
  count=2*count;
  count--;
  // Don\'t change the line below
  std::cout << "count = " << count<<endl;
    
  int a;
  cout<<"Enter an integer"<<endl;
  cin>>a;
  if(a<10 && a%2==0){
    cout<<"It's a very small Even Number"<<endl;
  }
  if(a<10 &&a%2==1){
    cout<<"It's a very small Odd Number"<<endl;
  }
  if(a<100 && a%2==0 && a>=10){
    cout<<"It's a Small Even Number"<<endl;
    int c;
    c=a/10;
    int b;
    b=a%10;
    cout<<"Before swapping the value of integer is "<<a<<endl;
    cout<<"After swapping the value of integer is "<<(b*10)+c<<endl;
  }
  else{
	  if(a>=100 && a%2==0){
		  cout<<"It's a Big Even Number"<<endl;
		  int c;
    	c=a/100;
    	int e;
    	e=(a/10)%10;
    	int b;
    	b=a%10;
    	cout<<"Before swapping the value of integer is "<<a<<endl;
    	cout<<"After swapping the value of integer is "<<(b*100)+(e*10)+c<<endl;
	  }
    if(a<=100 && a%2==1 && a>=10){
      cout<<"It's a Small Odd number"<<endl;
    }
    if(a>100 && a%2==1){cout<<"It's Big Odd number"<<endl;
    }
  }
  cout<<"Odd numbers till the given number are ";
  int d;
  for(d =1;d <a; d+=2){
	  cout<<d;
	  if(d+2<a){
		  cout<<",";
	  }
  }
  cout<<"\n";
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
    
  int number1;
  cin >> number1;
  string result1;
    
  // Write your code below
  result1 = (number>0) ? "positive" :(number==0) ? "zero" :"negative";
    
  std::cout << "The number is " << result1 << std::endl;
    
  for(int rows=1;rows<=5;rows++){
    for(int cols=1;cols<=5;cols++){
    	cout<<rows;
    	cout<<" * "<<cols;
    	cout<<" = "<<rows*cols<<endl;
		}
		cout<<"\n";
	}


  return 0;
}

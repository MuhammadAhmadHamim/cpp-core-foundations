/*Task2
#include<iostream>
#include<fstream>
using namespace std;
void readFile(ifstream &read){
	string data;
	getline(read,data);
	cout<<data;
}

int main(){
	
    int n;
    cout<<"Specify the range of your factorial series:";
    cin>>n;

	ofstream write;
    write.open("Factorial series.txt",ios::out);
    write<<"Factorial series of the given number:";
    
	if(!write.fail()){
    	for(int i=1;i<=n;i++){
    		int total=1;
    	
			for(int j=1;j<=i;j++){
    			total*=j;
			}
		
		write<<total;
		
			if(i!=n){
				write<<" + ";
			}
		
			else{
				write<<endl;
			}
		}
	}
	
	else{
		cout<<"Failed to create file\n";
	}

	write.close();
	
	ifstream read;
	read.open("Factorial series.txt",ios::in);
	
	if(read.fail()){
		cout<<"Failed to open the file!\n";
	}
    
	else{
    	readFile(read);
	}

	read.close();
	return 0;
}*/
#include<iostream>
#include<fstream>
using namespace std;
struct Data{
	string name;
	string uni;
	float Cgpa;
};

Data inputData(){
	Data d;
	
	cout<<"Enter the Name:";
	getline(cin,d.name);
	
	cout<<"Enter the name of the University:";
	getline(cin,d.uni);
	
	cout<<"Enter the CGPA:";
	cin>>d.Cgpa;
	
	cin.ignore();
	return d;
}

int main(){
	Data d1,d2;
	cout<<"For yourself:\n";
	cout<<"____________\n";
	d1=inputData();
	
	ofstream write;
	write.open("record.txt",ios::out);
	
	if(write.fail()){
		cout<<"Failed to open the file!\n";
	}
	
	else{
		write<<"Your Record:\n";
		write<<"___________\n";
		write<<"Name:"<<d1.name<<endl;
		write<<"University Name:"<<d1.uni<<endl;
		write<<"CGPA:"<<d1.Cgpa<<endl;
	}

	write.close();
	
	cout<<"For your friend:\n";
	cout<<"____________\n";
	d2=inputData();
	
	write.open("record.txt",ios::out | ios::app);
	
	if(write.fail()){
		cout<<"Failed to open the file!\n";
	}
	
	else{
		write<<"Your Friend's Record:\n";
		write<<"___________\n";
		write<<"Name:"<<d2.name<<endl;
		write<<"University Name:"<<d2.uni<<endl;
		write<<"CGPA:"<<d2.Cgpa<<endl;
	}
	
	write.close();	
	return 0;
}

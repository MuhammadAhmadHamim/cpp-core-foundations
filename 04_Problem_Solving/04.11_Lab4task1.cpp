#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number of day of week"<<endl;
	cin>>a;
	switch(a)
	{
	case 1:
	{cout<<"It's Monday.."<<endl;}
	break;
	case 2:{cout<<"It's Tuesday.."<<endl;
	}
		break;
	case 3:{cout<<"It's Wednesday.."<<endl;
	}
		break;
	case 4:{cout<<"It's Thursday.."<<endl;
	}
		break;
	case 5:{cout<<"It's Friday.."<<endl;
	}
		break;
	case 6:{cout<<"It's Saturday.."<<endl;
	}
		break;
	case 7:{cout<<"It's Sunday.."<<endl;
	}
		break;
	default:
		cout<<"ERROR,Please enter a number between 1 & 7.."<<endl;
	}
		getch();
	return 0;
}

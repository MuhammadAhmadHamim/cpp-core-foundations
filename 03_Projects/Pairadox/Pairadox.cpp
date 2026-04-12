#include<iostream>
#include<conio.h>
#include<algorithm>
#include<random>
#include<cctype>
#include<windows.h> 
#include<fstream>
using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int digitcheck(char r , char c){
    if(!isdigit(r) || !isdigit(c)){
        return 0;
    }
    else{
        return 1;
    }
}

int inputcheck(bool match[][6] , int rows , int columns){
    if(rows < 0 || rows > 5  || columns <0 || columns > 5){
        return 0;
    }
    else if(match[rows][columns] !=false){
       return 2;
    }
    else{
        return 1;
    }
}
void score_board(int score1,int score2){
	ofstream write;
	write.open("Saved scores.txt",ios::out);
	if(write.fail()){
		cout<<"Failed to open the file!\n";
	}
	else{
	write<<"Player 1's score:"<<score1<<" \t\t|\t Player 2's score:"<<score2<<endl;
	if(score1==score2){ write<<"Draw!\n"; }
    else if(score1>score2){ write<<"Player 1 wins!\n"; }
    else{ write<<"Player 2 wins!\n"; }
}
    write.close();
    ifstream read;
    read.open("Saved scores.txt",ios::in);
    if(read.fail()){
        cout<<"Failed to open the file!\n";
	}

	else{
		string data;
		getline(read,data);
		cout<<data<<endl;
		getline(read,data);
		cout<<data<<endl;
		cin.ignore();
	}
	read.close();
}
int main(){
    system("color 0D"); 

    setColor(12); 
    cout << "\t\t\t\t      PAIRADOX\n\n";
    setColor(3); 
    
    cout<<"\t\t\t\t0   1   2   3   4   5"<<endl<<endl;
    char display[6][6];
    for(int i=0;i<6;i++){
        cout<<"\t\t\t   "<<i<<"  | ";
        for(int j=0;j<6;j++){
            display[i][j]='*';
            cout<<display[i][j]<<" | ";
        }
        cout<<endl<<endl;
    }
    setColor(12);
    cout<<"<-Instructions->\n";
    setColor(7);
    cout<<"1.The game is for 2 players who take turns flipping cards on a 6x6 board.\n";
    cout<<"2.Each turn, a player selects two cards by entering their row and column numbers (0-5)\n";
    cout<<"3.If the two revealed cards match, the player earns 2 points and plays again.\n";
    cout<<"4.If they don't match, the cards are hidden again and the turn passes to the other player.\n";
    cout<<"5.Matched cards remain revealed and can't be selected again.\n";
    cout<<"6.The game ends when all 36 cards have been matched.\n";
    cout<<"7.Final scores are displayed, a winner is declared, and scores are saved to files.\n\n";
    setColor(3);
    
    int rows[2];
    int columns[2];
    int score1=0;
    int score2=0;
    int turn=1;

    char rank[36]={'K' , 'Q' , 'J' , '9' , '8' , '7' , '6' , '5' , '4' , '3' , '2' , 'A' ,'@' ,'#' ,'$' ,'%' ,'?','&' ,
                   'K' , 'Q' , 'J' , '9' , '8' , '7' , '6' , '5' , '4' , '3' , '2' , 'A' ,'@' ,'#' ,'$' ,'%' ,'?','&'};
    shuffle(rank , rank +36 , random_device());

    char board[6][6];
    int k=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            board[i][j]=rank[k];
            k++;
        }
    }

    bool matched[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            matched[i][j]=false;
        }
    }

    while(true){

        char rowsChar;
        char columnsChar;

        if(turn%2==1){
            cout<<"Player 1's Turn"<<endl;
        }
        else{
            cout<<"Player 2's Turn"<<endl;
        }
        cout<<"_____________"<<endl;
        cout<<"Player 1's score:"<<score1<<" \t\t|\t Player 2's score:"<<score2<<endl;

        for(int i=0;i<2;i++){
            cout<<"Select the card to flip:";
            cin>>rowsChar>>columnsChar;

            if(digitcheck(rowsChar , columnsChar)==0){
                cout<<"Error,Please enter a valid character\n";
                i--;
            }
            else{
                rows[i]=rowsChar - '0';
                columns[i]=columnsChar - '0';
                int check = inputcheck(matched , rows[i] , columns[i]);
                if(check==0){
                    cout<<"Invalid input,Please try again!"<<endl;
                    i--;
                }
                else if(check==2){
                    cout<<"Error,Spot already used\n";
                    i--;
                }

                else{
                    display[rows[i]][columns[i]]=board[rows[i]][columns[i]];
                    matched[rows[i]][columns[i]]=true; 

                    for(int j=0;j<6;j++){
                        cout<<"\t\t\t\t";
                        for(int k=0;k<6;k++){
                            char symbol = display[j][k];

                            if(symbol == '*') setColor(3);  
                            else if(symbol == 'Q') setColor(12); 
                            else if(symbol == 'K') setColor(2);  
                            else if(symbol == 'J') setColor(11); 
                            else if(symbol == 'A') setColor(10); 
                            else setColor(3); 

                            cout<<symbol<<"   ";
                        }
                        cout<<endl;
                    }
                }
            }
        }

        if(display[rows[0]][columns[0]] == display[rows[1]][columns[1]]){
            cout<<"Matched!"<<endl;
            
            if(turn%2==1){
                cout<<"Player 1 ";
                score1+=2;
            }
            else{
                cout<<"Player 2 ";
                score2+=2;
            }
            cout<<"has got 2 points\n";

            
            turn--;
        }

        else{
            cout<<"Mismatched!\n";
            for(int i=0;i<2;i++){

                matched[rows[i]][columns[i]]=false;
                display[rows[i]][columns[i]]='*';
				         
            }
            
            
            cout<<"Flipping back.";
            Sleep(500);
            cout<<".";
            Sleep(500);
            cout<<".";
            Sleep(500);
            cout<<".\n";

            for(int j=0;j<6;j++){
                cout<<"\t\t\t\t";
                for(int k=0;k<6;k++){
                    char symbol = display[j][k];

                    if(symbol == '*') setColor(3);
                    else if(symbol == 'Q') setColor(12);
                    else if(symbol == 'K') setColor(2);
                    else if(symbol == 'J') setColor(11);
                    else if(symbol == 'A') setColor(10);
                    else setColor(3);

                    cout<<symbol<<"   ";
                }
                cout<<endl;
            }
        }


        bool isfinished=true;
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                if(matched[i][j]==false){
                    isfinished=false;
                    break;
                }
                else{
                	continue;
				}
            }       
        }
        turn++;


        if(isfinished) break;
        else{
        	continue;
		}
        
    }


    
    setColor(2); 
    score_board(score1,score2);
    setColor(15); 
    getch();
    return 0;
}

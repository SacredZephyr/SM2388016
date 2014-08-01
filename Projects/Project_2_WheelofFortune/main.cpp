/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 10, 2014, 12:24 PM
 * Project 1 CSC5 46023
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
struct player
{
	string name;
	int money;
}one;
const int spin=24;//Setting up the Array for spin numbers
const int foods=30;//Setting up Array for number of foods

//Function Prototypes
void spinWoF();//Press Enter for Wheel Spin
void ReadyW();//Press Enter to continue
void PlayerC();//Player's choice

//Execution Starts Here...
int main(int argc, char** argv) {
    
    //Setting up Random Wheel
    srand(time(0));
    unsigned short spins=rand()%24+1;
    
    //Declaring Variables
    int pchoice=4;//Player choices
    int Wmon;//Money off of Wheel for inside player choices as well
    //Setting up The Wheel of Fortune for inside of player choices
    int WoF[spin]=
        {
            800,500,3500,600,300,900,2500,350,425,700,650,
            575,325,525,675,850,5000,750,475,625,825,550,450,725
        };
    char letter;//User's Input
    string fword;//User Entered Full Word
    string endg="No";
    int win=false;//User Wins
    int tries=0;//The amount of tries/guesses
    ifstream input;//To input a file
    int wrong;
    bool corr;//correct
    bool simi;//similar
    
    //Opening Files
    input.open("food.txt");
    string food[foods];
    for(int i=0;i<30;i++)
        input>>food[i];
        input.close();
    input.open("intro.txt");
    string intro;
    if (input.is_open())
    {
        while ( getline (input,intro) )
        {
          cout<<intro<<'\n';
        }
        input.close();
    }
    
    //Opening of the game with Welcome
    cout<<"Welcome to Wheel of Fortune! What is your name challenger?\n";
    cin>>one.name;
    cin.ignore();
    one.money=0;
    cout<<"Your current balance is $"<<one.money<<"."<<endl;
    cout<<"Are You Ready to Spin the Wheel?!\n"
        <<"(Press Enter to Continue)\n";
    cin.ignore();
    spinWoF();
    cout<<"You Spun a "<<spins<<" with a value of"<<endl;
    Wmon=WoF[spins];
    cout<<"$"<<Wmon<<endl;
    one.money+=Wmon;
    cout<<"You have $"<<one.money<<endl;

    //The Loop for Entirety of Game
    do
    {
        //The word/phrase generator
        srand(time(0));
        unsigned short choice=rand()%30+1;
        string word =(food[choice]);//chooses a word randomly
        char tempw[word.length()];//The temporary word save
        char gameword[word.length()];//The game word
        char guess[word.length()];
        for(int i=0;i<word.length();i++)//Loop for the game word
        {
            gameword[i]=word[i];
        }
        //Game Reset
        win=false;
        tries=0;
        simi=false;
        
        do //Game Loop
        {
                corr=true;
                ReadyW();
                cout<<"What Word is it?\n";
                for(int i=0;i<word.length();i++)//Shows word as underscores
                {
                    guess[i]='_';
                    tempw[i]=guess[i];
                }
                cout<<endl;

//                cout<<word<<endl; //to test if underscores and majority of the code work

                for(int i=0;i<word.length();i++){
                    guess[i]=tempw[i];//Recovery and Display
                    cout<<guess[i]<<" ";
                }
                cout<<endl;
                
                cout<<"Choose Accordingly!\n\n"//Switch statement to give player choices
                    <<"1.Buy a Vowel!\n"
                    <<"2.Buy a Consonant!\n"
                    <<"3.Spin the Wheel Again!\n"
                    <<"4.Guess the Word\n";    
                cin>>pchoice;
                cin.ignore();

                switch(pchoice)
                {
                    case 1:
                    {
                        cout<<"You bought a Vowel!\n";
                        one.money-=300;
                        cout<<"You have $"<<one.money<<" left!\n";
                        cout<<"Please Enter a Vowel!\n";
                        cin>>letter;
                        cin.ignore();
                        tries++;
                        if(one.money<0)
                        {
                            cout<<"You are Bankrupt!\n";
                            cout<<"End Game? Yes/No?\n";
                            cin>>endg;
                            cin.ignore();
                        }
                        break;
                    }
                    case 2:
                    {
                        cout<<"You bought a Consonant!\n";
                        one.money-=200;
                        cout<<"You have $"<<one.money<<" left!\n";
                        cout<<"Please Enter a Consonant!\n";
                        cin>>letter;
                        cin.ignore();
                        tries++;
                        if(one.money<0)
                        {
                            cout<<"You are Bankrupt!\n";
                            cout<<"End Game? Yes/No?\n";
                            cin>>endg;
                            cin.ignore();
                        }
                        break;
                    }
                    case 3:
                    {
                        cout<<"You can spin the wheel again!\n";
                        srand(time(0));
                        unsigned short spins=rand()%24+1;
                        spinWoF();
                        cout<<"You Spun a "<<spins<<" with a value of"<<endl;
                        Wmon=WoF[spins];
                        cout<<"$"<<Wmon<<endl;
                        one.money+=Wmon;
                        cout<<"You have $"<<one.money<<endl;
                        break;
                    }
                    case 4:
                    {
                    cout<<"What do you believe the word is?\n";
                                cin>>fword;
                                cin.ignore();
                                for(int i=0;i<word.length();i++)
                                {
                                    word[i]=fword[i];
                                    tries++;
                                }
                                if(!strcmp(gameword,tempw))
                                {
                                    win=true;
                                    simi=true;
                                    cout<<"Congrats that was the right word!\n";
                                }
                                if(simi==false)
                                {
                                    tries++;
                                    cout<<"Your Answer was not correct!\n";
                                }
                                break;
                    }
                }
                if ((letter>49 && letter<97) || letter>122 || letter<49)//if input is wrong
                    {
                        corr=false;
                    }
                if(corr==true){
                for(int i=0;i<word.length();i++) 
                {
                    
                    if(letter==gameword[i])     //if input is right
                    {
                       wrong=1;
                       guess[i]=word[i];
                       tries++;
                    }
                }
                }
                else
                    {
                    cout<<"Vowel or Consonant Please!\n";//If something more than 1 character or invalid input
                    tries++;
                    corr=false;
                    }
            }while(corr==false);
                if(letter!=49)//to check if letter inputted matches a piece of the word
                {
                    for(int i=0;i<word.length();i++)
                    {
                        if(letter==gameword[i])
                        {
                            word[i]=gameword[i];
                            tries++;
                            simi=true;
                        }
                        tempw[i]=guess[i];
                    }
                    for(int i=0;i<word.length();i++){
                    guess[i]=tempw[i];//Recovery and Display
                    cout<<guess[i]<<" ";
                }
                    if(simi==true && win==false)//Continue after all the first initial checks
                    {
                        cout<<"Choose Accordingly!\n\n"
                        <<"1.Buy a Vowel!\n"
                        <<"2.Buy a Consonant!\n"
                        <<"3.Spin the Wheel Again!\n"
                        <<"4.Guess the Word\n";    
                        cin>>pchoice;
                        cin.ignore();

                        switch(pchoice)
                        {
                            case 1:
                            {
                                cout<<"You bought a Vowel!\n";
                                one.money-=300;
                                cout<<"You have $"<<one.money<<" left!\n";
                                cout<<"Please Enter a Vowel!\n";
                                cin>>letter;
                                cin.ignore();
                                tries++;
                                break;
                                if(one.money<0)
                                {
                                    cout<<"You are Bankrupt!\n";
                                    cout<<"End Game? Yes/No?\n";
                                    cin>>endg;
                                    cin.ignore();
                                }
                            }
                            case 2:
                            {
                                cout<<"You bought a Consonant!\n";
                                one.money-=200;
                                cout<<"You have $"<<one.money<<" left!\n";
                                cout<<"Please Enter a Consonant!\n";
                                cin>>letter;
                                cin.ignore();
                                tries++;
                                if(one.money<0)
                                {
                                    cout<<"You are Bankrupt!\n";
                                    cout<<"End Game? Yes/No?\n";
                                    cin>>endg;
                                    cin.ignore();
                                }
                                break;
                            }
                            case 3:
                            {
                                cout<<"You can spin the wheel again!\n";
                                srand(time(0));
                                unsigned short spins=rand()%24+1;
                                spinWoF();
                                cout<<"You Spun a "<<spins<<" with a value of"<<endl;
                                Wmon=WoF[spins];
                                cout<<"$"<<Wmon<<endl;
                                one.money+=Wmon;
                                cout<<"You have $"<<one.money<<endl;
                                break;
                            }
                            case 4:
                            {
                                cout<<"What do you believe the word is?\n";
                                cin>>fword;
                                cin.ignore();
                                for(int i=0;i<word.length();i++)
                                {
                                    word[i]=fword[i];
                                    tries++;
                                }
                                if(!strcmp(gameword,tempw))
                                {
                                    win=true;
                                    simi=true;
                                    corr=true;
                                    cout<<"Congrats that was the right word!\n";
                                }
                                if(simi==false)
                                {
                                    tries++;
                                    cout<<"Your Answer was not correct!\n";
                                }
                                break;
                            }
                        }
                    }
                }
        if(tries<10 && win==true && simi==true){

        cout<<"Congrats on Winning!\n"
            <<"You won $"<<one.money<<endl;    
        cout<<"Continue? Yes/No?\n";
        cin>>endg;
        cin.ignore();
        }

    } while((endg!="Yes")&&(endg!="yes"));
    
 return 0;
}
void spinWoF()
{
    cout<<"Press Enter to Spin the Wheel!\n";
    cin.ignore();
}
void ReadyW()
{
    cout<<"Are You Ready to Continue? Press Enter for your word?\n";
    cin.ignore();
}

/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 20, 2014, 12:08 PM
 * Project 1 Music Note Game
 */

//System Level Libraries
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
int choice;

//Function Prototypes
bool lttch(char,char);//Letter Checker -Bradd Carey
void rule();

//Execution Begins Here...
int main(int argc, char** argv) {
    //Declare Variables
    char mlttr,anlttr;//Music Letter & Answer Letter
    short ans;
    bool masn=1;//Music Answer to show if it was right then its right
    int correct;
    short m[6]={0,1,2,3,4,5};//Music Sheets
    char cont;

    //Show the Rules of the Game
    rule();
    
    //Game Loop
    do
    {
        cout<<"Choose a number between 1-6 and Good Luck!\n";
        cin>>choice;
        cin.ignore();

        switch(choice)
        {
        //Music Sheets
            case 1:
            {
                cout<<"____________________\n"
                    <<"_O__________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"Identify the note!  \n"
                    <<"The note is in Treble\n"
                    <<"Clef!               \n"; 
                do{   
                    cin>>mlttr;
                    cin.ignore();

                    if(mlttr=='E'||mlttr=='e')
                    {
                        cout<<"The note was an E congratulations!\n";
                        mlttr==anlttr;
                    }
                    else
                    {
                        cout<<"Try Again!\n";
                    }
                }while(mlttr!='e' && mlttr!='E');
            break;
            cin.ignore();
            }
            case 2:
            {
                cout<<"__O_________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"Identify the note!  \n"
                    <<"The note is in Treble\n"
                    <<"Clef!               \n"; 
                do{   
                    cin>>mlttr;
                    cin.ignore();

                    if(mlttr=='G'||mlttr=='g')
                    {
                        cout<<"The note was a G congratulations!\n";
                        mlttr==anlttr;
                    }
                    else
                    {
                        cout<<"Try Again!\n";
                    }
                }while(mlttr!='g' && mlttr!='G');
            break;
            cin.ignore();
            }
            case 3:
            {
                cout<<"____________________\n"
                    <<"____________________\n"
                    <<"_______O____________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"Identify the note!  \n"
                    <<"The note is in Treble\n"
                    <<"Clef!               \n";
                do{
                    cin>>mlttr;
                    cin.ignore();

                    if(mlttr=='C'||mlttr=='c')
                    {
                        cout<<"The note was a C congratulations!\n";
                        mlttr==anlttr;
                    }
                    else
                    {
                        cout<<"Try Again!\n";
                    }
                }while(mlttr!='c' && mlttr!='C');
            break;
            cin.ignore();
            }
            case 4:
            {
                cout<<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"_____________O______\n"
                    <<"____________________\n"
                    <<"Identify the note!  \n"
                    <<"The note is in Treble\n"
                    <<"Clef!               \n";  
                do{ 
                    cin>>mlttr;
                    cin.ignore();

                    if(mlttr=='A'||mlttr=='a')
                    {
                        cout<<"The note was an A congratulations!\n";
                        mlttr==anlttr;
                    }
                    else
                    {
                        cout<<"Try Again!\n";
                    }
                }while(mlttr!='a' && mlttr!='A');
            break;
            cin.ignore();
            }
            case 5:
            {
                cout<<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"____O_______________\n"
                    <<"Identify the note!  \n"
                    <<"The note is in Treble\n"
                    <<"Clef!               \n";  
                do{  
                    cin>>mlttr;
                    cin.ignore();

                    if(mlttr=='F'||mlttr=='f')
                    {
                        cout<<"The note was a F congratulations!\n";
                        mlttr==anlttr;
                    }
                    else
                    {
                        cout<<"Try Again!\n";
                    }
                }while(mlttr!='f' && mlttr!='F');
            break;
            cin.ignore();
            }
            case 6:
            {
                cout<<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"____________________\n"
                    <<"    O               \n"    
                    <<"Identify the note!  \n"
                    <<"The note is in Treble\n"
                    <<"Clef!               \n"; 
                do{   
                    cin>>mlttr;
                    cin.ignore();

                    if(mlttr=='D'||mlttr=='d')
                    {
                        cout<<"The note was a D congratulations!\n";
                        mlttr==anlttr;
                    }
                    else
                    {
                        cout<<"Try Again!\n";
                    }
                }while(mlttr!='d' && mlttr!='D');
            break;
            cin.ignore();
            }
        }

    }while(mlttr==anlttr);
    
    return 0;
}

bool lttch(char mlttr,char anlttr)
{
    if(mlttr==anlttr)
    {
        return 1;   
    }
    else
    {
        return 0;
    }
}
void rule()
{
    cout<<"________________________________________________\n"
        <<"|          Name the Music Note!                |\n" 
        <<"|______________________________________________|\n"
        <<"The Rules of the game are simple for those with \n"
        <<"an adept mind towards music and its notes. Just \n"
        <<"name the note and give the best answer you can! \n"
        <<"If you have no skills with music this may try to\n"
        <<"help you get better with music and its notes!   \n"
        <<"Without further ado press enter when your ready!\n";
cin.ignore();    
}
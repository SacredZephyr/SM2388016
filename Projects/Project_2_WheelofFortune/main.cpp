/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 10, 2014, 12:24 PM
 * Project 1 CSC5 46023
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <string>
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
};
const int spin=24;//Setting up the Array for spin numbers
    
//Function Prototypes
void spinWoF();
void ReadyW();

//Execution Starts Here...
int main(int argc, char** argv) {
    
    //Declaring Variables
    //Setting up The Wheel of Fortune
   int WoF[spin]=
    {
        800,500,3500,600,300,900,2500,350,425,700,650,
        575,325,525,675,850,5000,750,475,625,825,550,450,725
    };
    unsigned short guess;//User's Guess
    char letter;//User's Input 
    char fword;//User Entered Full Word
    string endg="No";
    int win;//User Wins
    int tries;//The amount of tries
    
    //The Loop
    do
    {
        //The word/phrase generator
        srand(time(0));
        unsigned short choice=rand()%30+1;
        unsigned short spins=rand()%24+1;
        string food[30]=//the fruit choices
        {
            "Coconut","Pineapple","Mango","Banana","Dragonfruit",
            "Kiwi","Strawberry","Pear","Lychee","Tomato",
            "Blueberry","Cucumber","Eggplant","Watermelon","Orange",
            "Banana Smoothie","Chocolate Strawberries","Fruit Tart","Banana Muffin",
            "Fruit Salad","Apple Pie","Peach Cobbler","Orange Chicken","Blueberry Cookies",
            "Dutch Apple Pie","Strawberry Shortcake","Cranberry Sauce","Applesauce"
        };
        string word =(food[choice]);
        char gameword[word.length()];
        for(int i=0;i<word.length();i++)
        {
            gameword[i]=word[i];
        }
        //Game Reset
        win=0;
        guess=0;
        char guess[word.length()-1];
        for(int i=0;i<=word.length();i++)
        {
            guess[i]='_';
        }
        while (tries=0)
        {
            spinWoF();
            cout<<"You Spun a "<<spins<<" with a value of"<<endl;
            cout<<"$"<<WoF[spins]<<endl;
            ReadyW();
            cout<<"What Word is it?\n";
            cout<<guess<<endl;
            cin>>letter;
            cin.ignore();
            do
            {
                if (letter=guess)
                {
                    cout<<"Please Try Your Luck Again!\n";
                    tries+1;
                }
                else if((letter=guess)&&(fword=guess))
                {
                   cout<<"Choose another letter!\n";
                   cin>>letter;
                   tries+1;
                }
                else
                {
                    cout<<"Enter the Full phrase!\n";
                    cin>>fword;
                    win;
                }
            }while((tries!=10)||(win));
            cout<<"End Game? Yes/No?\n";
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
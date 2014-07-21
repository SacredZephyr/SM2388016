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
struct Player 
{
	string name;
	int money;
};
    
//Function Prototypes

//Execution Starts Here...
int main(int argc, char** argv) {
    
    //Declaring Variables
    int WoF[24];//The Wheel of Fortune
    unsigned short guess;//User's Guess
    char letter;//User's Input 
    char fword;//User Entered Full Word
    string endg="Yes";
    int win;//User Wins
    
    //The Loop
    do
    {
        //The word/phrase generator
        srand(time(0));
        unsigned short choice=rand()%15+1;
        string fruit[15]=//the fruit choices
        {
            "Coconut","Pineapple","Mango","Banana","Dragonfruit",
            "Kiwi","Strawberry","Pear","Lychee","Tomato",
            "Blueberry","Cucumber","Eggplant","Watermelon","Orange"
        };
        string food[15]=//the food choices
        {
            "Banana Smoothie","Chocolate Strawberries","Fruit Tart","Banana Muffin",
            "Fruit Salad","Apple Pie","Peach Cobbler","Orange Chicken","Blueberry Cookies",
            "Dutch Apple Pie","Strawberry Shortcake","Cranberry Sauce","Applesauce",
            "Pineapple Cake","Yogurt and Granola"
        };
        string word =((food)||(fruit))[choice];
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
        
    
        //Setting up the Wheel
        WoF[0]=0;
        WoF[1]=800;
        WoF[2]=500;
        WoF[3]=3500;
        WoF[4]=600;
        WoF[5]=300;
        WoF[6]=900;
        WoF[7]=2500;
        WoF[8]=350;
        WoF[9]=425;
        WoF[10]=700;
        WoF[11]=650;
        WoF[12]=575;
        WoF[13]=325;
        WoF[14]=525;
        WoF[15]=675;
        WoF[16]=850;
        WoF[17]=5000;
        WoF[18]=750;
        WoF[19]=475;
        WoF[20]=625;
        WoF[21]=825;
        WoF[22]=550;
        WoF[23]=450;
        WoF[24]=725;
        
    } while(endg!="No");
 return 0;
}
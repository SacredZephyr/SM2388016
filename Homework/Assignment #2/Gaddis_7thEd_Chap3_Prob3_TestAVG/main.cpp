/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on June 26, 2014, 1:18 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here...
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short FTS,STS,TTS,FoTS,FiTS; //1st through 5th Test Scores
    unsigned short ToTScr;
    
    //Output
    cout<<"What was the first test score? \n";
    cin>>FTS;
    cout<<"What was the second test score? \n";
    cin>>STS;
    cout<<"What was the third test score? \n";
    cin>>TTS;
    cout<<"What was the fourth test score? \n";
    cin>>FoTS;
    cout<<"What was the fifth test score? \n";
    cin>>FiTS;
    
    //Calculation
    ToTScr=(FTS+STS+TTS+FoTS+FiTS)/5;
    
    //Final Output
    cout<<"Total Test Average is "<<ToTScr<<endl;
    
    return 0;
}


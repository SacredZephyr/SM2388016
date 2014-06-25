/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 *
 * Created on June 24, 2014, 4:39 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libaries

//Global Constants

//Function Prototypes

//Execution Begins Here...
int main(int argc, char** argv) {
    
    //Declaring Variables
    short Tank=20; //Tank Size
    float avgMPGT=21.5; //Average Miles per Gallon in Town
    float avgMPGH=26.8; //Average Miles per Gallon on Highway
    float avgMPG=avgMPGT+avgMPGH/2; //Total Average Miles per Gallon
    
    //Calculations
    avgMPG=avgMPGT+avgMPGH;
    
    //Output
    cout<<"Average Miles per Gallon ="<<avgMPG<<" mpg"<<endl;
    
    //End of Code
    return 0;
}

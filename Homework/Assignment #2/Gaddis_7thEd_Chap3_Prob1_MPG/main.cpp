/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on June 26, 2014, 12:35 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here...
int main(int argc, char** argv) {
    //Declaring Variables
    unsigned short GoG,NoM,MPG;
    
    //Output
    cout<<"How many gallons are inside the gas tank? \n";
    cin>>GoG;//Gallons of Gas
    cout<<"Max amount of miles driven?\n";
    cin>>NoM;//Number of Miles
    
    //Calculations
    MPG=NoM/GoG;
    
    //Final Output
    cout<<"Miles per Gallon = "<<MPG<<" mpg \n";
    //End of Code
    return 0;
}


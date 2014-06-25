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
    short Tank=20;
    float avgMPGT=21.5;
    float avgMPGH=26.8;
    float avgMPG=avgMPGT+avgMPGH/2;
    cout<<"Average Miles per Gallon ="<<avgMPG<<" mpg"<<endl;
    //End of Code
    return 0;
}
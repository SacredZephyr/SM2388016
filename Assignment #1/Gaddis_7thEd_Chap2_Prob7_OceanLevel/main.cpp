/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 *
 * Created on June 24, 2014, 4:07 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libaries

//Global Constants

//Function Prototypes

//Execution Begins Here...
int main(int argc, char** argv) {
    float OcRise=1.5;
    float yr=5;
    float Myr=7;
    float Kyr=10;
    cout<<"Ocean Level in 5 years = "<<OcRise*yr<<" Milimeters"<<endl;
    cout<<"Ocean Level in 7 years = "<<OcRise*Myr<<" Milimeters"<<endl;
    cout<<"Ocean Level in 10 years = "<<OcRise*Kyr<<" Milimeters"<<endl;
    //End of Code
    return 0;
}
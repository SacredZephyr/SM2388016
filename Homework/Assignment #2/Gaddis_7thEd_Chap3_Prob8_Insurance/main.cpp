/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 1, 2014, 11:05 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here...
int main(int argc, char** argv) {
    //Declare Variables
    int PrpV,InsV;//Property Value and Insurance Value
    
    //Input
    cout<<"How much is the Property Replacement Cost? \n";
    cin>>PrpV;
    
    //Calculation
    InsV=(PrpV*0.8);
    
    //Output
    cout<<"The Minimum Amount of Recommended Insurance = \n";
    cout<<InsV<<endl;

    return 0;
}


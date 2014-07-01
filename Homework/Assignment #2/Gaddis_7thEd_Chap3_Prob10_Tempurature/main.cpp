/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 1, 2014, 11:33 AM
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
    float Fahr,Cels; //Fahrenheit and Celsius
  
    //Input
    cout<<"Degrees in Celsius? \n";
    cin>>Cels;
    
    //Calculations
    Fahr=(Cels*9/5)+32;
    
    //Output
    cout<<"The Temperature in Fahrenheit is "<<Fahr<<endl;
    
    return 0;
}


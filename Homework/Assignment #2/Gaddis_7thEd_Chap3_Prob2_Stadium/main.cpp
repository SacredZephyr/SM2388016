/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on June 26, 2014, 12:53 PM
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
    unsigned short CA,CB,CC; //Seats Class A,B and C
    float TckSal;
    
    //Output
    cout<<"How many Class A Seats were sold? \n";
    cin>>CA;
    cout<<"How many Class B Seats were sold? \n";
    cin>>CB;
    cout<<"How many Class C Seats were sold? \n";
    cin>>CC;
    
    //Calculation
    TckSal=(CA*15)+(CB*12)+(CC*9);
    
    //Final Output
    cout<<showpoint<<fixed<<setprecision(2);
    cout<<"Total Ticket Sales =$"<<TckSal<<endl;
    return 0;
}


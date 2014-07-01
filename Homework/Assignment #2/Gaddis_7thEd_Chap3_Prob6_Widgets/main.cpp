/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 1, 2014, 10:34 AM
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
    unsigned short Wid,WidP; //Widgets and Widget Per Pallets
    unsigned short WidWP; //the Weight of the Widget Pallet
    
    //Input
    cout<<"How much does the Pallet weigh?"<<endl;
    cin>>WidWP;
    
    //Calculations
    Wid=9.2;
    WidP=WidWP/Wid;
    
    //Output
    cout<<"Amount of Widgets inside the Pallet = "<<endl;
    cout<<WidP<<endl;

    return 0;
}


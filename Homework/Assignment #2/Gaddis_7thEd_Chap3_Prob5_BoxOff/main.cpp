/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 1, 2014, 9:59 AM
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
    const int Size=30;
    char Movie[Size]; //Name of the Movie
    unsigned short AMT,CMT; //Adult and Child Movie Tickets
    unsigned short AMTA,CMTA; //Adult and Child Movie Ticket Amount
    unsigned short GBOP,NBOP; //Gross and Net Box Office Profit
    unsigned short AmPD; //Amount Paid to Distributor
    
    //Output
    cout<<"What is the name of the movie?"<<endl;
    cin.getline(Movie,Size);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>AMT;
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>CMT;
    
     //Calculations
    AMTA=AMT*6;
    CMTA=CMT*3;
    GBOP=AMTA+CMTA;
    NBOP=GBOP*0.2;
    AmPD=GBOP-NBOP;
    
    //Final Output
    cout<<"What was the Gross Box Office Profit?"<<endl;
    cout<<"$"<<GBOP<<endl;
    cout<<"What was the Net Box Office Profit?"<<endl;
    cout<<"$"<<NBOP<<endl;
    cout<<"Amount Paid to the Distributor?"<<endl;
    cout<<"$"<<AmPD<<endl;

    return 0;
}


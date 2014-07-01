/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 1, 2014, 10:45 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libaries

//Global Constants

//Function Prototypes

//Execution Starts Here...
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short Cookies,Servings;//Amount of Cookies,Servings
    unsigned short Cal,Calories,NumCal;//Amount of Total Calories and Calories
    unsigned short CookBag; //Amount of Cookies Per Bag
    
    //Input
    cout<<"How many Cookies did you eat? \n";
    cin>>Cookies;
    
    //Calculations
    Cal=300;
    CookBag=40;
    Servings=CookBag/10;
    NumCal=Cal/Servings;
    Calories=Cookies*NumCal;
    
    //Output
    cout<<"Total Amount of Calories consumed = "<<endl;
    cout<<Calories<<endl;
    

    return 0;
}


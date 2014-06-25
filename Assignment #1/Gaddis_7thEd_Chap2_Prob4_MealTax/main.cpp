/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 *
 * Created on June 24, 2014, 4:20 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libaries

//Global Constants

//Function Prototypes

//Execution Begins Here...
int main(int argc, char** argv) {
    float MPrc=4.45e1;
    float Tax=6.75e-2;
    float Tip=1.5e-1;
    cout<<"Meal Price =$"<<MPrc<<endl;
    cout<<"Tax on Meal =$"<<MPrc*Tax<<endl;
    cout<<"Tip Due =$"<<MPrc*Tax+MPrc*Tip<<endl;
    cout<<"Total Amount on Bill =$"<<MPrc*Tax+MPrc*Tip+MPrc*Tax+MPrc<<endl;
    //End of Code
    return 0;
}
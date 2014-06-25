/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on June 24, 2014, 3:53 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libaries

//Global Constants

//Function Prototypes

//Execution Begins Here...
int main(int argc, char** argv) {
    float SSTax=0.4e-1;
    float CSTax=0.2e-1;
    short Prch=52;
    cout<<"Sales Tax on Purchase =$"<<Prch*(CSTax+SSTax)<<endl;
    //End of Code
    return 0;
}

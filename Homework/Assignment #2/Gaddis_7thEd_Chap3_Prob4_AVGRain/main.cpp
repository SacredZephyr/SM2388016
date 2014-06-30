/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on June 26, 2014, 1:34 PM
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
    char Month[12];
    unsigned short Rain1,Rain2,Rain3;
    float AvgR;
    
    
    
    //Output
    cout<<"What Month?"<<endl;
    cin>>Month;
    cout<<"How much rain fell?"<<endl;
    cin>>Rain1;
    cout<<"And how about the next month?"<<endl;
    cin>>Month;
    cout<<"And how much rain fell?"<<endl;
    cin>>Rain2;
    cout<<"What's the third month?"<<endl;
    cin>>Month;
    cout<<"And how much rain fell then?"<<endl;
    cin>>Rain3;
    
    //Calculation
    AvgR=(Rain1+Rain2+Rain3)/3;
    
    //Output for Average
    cout<<setprecision(4)<<fixed;
    cout<<"The total average rainfall is "<<AvgR<<" inches."<<endl;

    return 0;
}


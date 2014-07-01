/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 1, 2014, 11:20 AM
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
    long Loan,Ins,Gas,Oil,Tire,Maint; //The Expenses
    int Mthly,Yrly; //Monthly and Yearly
    //Input
    cout<<"Monthly Vehicle Expenses \n";
    cout<<"Loan Charge \n";
    cin>>Loan;
    cout<<"Insurance Charge \n";
    cin>>Ins;
    cout<<"Gas Expense \n";
    cin>>Gas;
    cout<<"Oil Change and Expenses \n";
    cin>>Oil;
    cout<<"Expenses on Tires \n";
    cin>>Tire;
    cout<<"Maintenance Charges \n";
    cin>>Maint;
    
    //Calculations
    Mthly=Loan+Ins+Gas+Oil+Tire+Maint;
    Yrly=Mthly*12;
    
    //Output
    cout<<"Monthly Vehicle Expenses Total =$"<<Mthly<<endl;
    cout<<"Yearly Vehicle Expenses Total =$"<<Yrly<<endl;

    return 0;
}


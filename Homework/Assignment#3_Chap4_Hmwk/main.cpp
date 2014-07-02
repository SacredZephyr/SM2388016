/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 2, 2014, 12:20 PM
 */

//System Level Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here...
int main(int argc, char** argv) {
    
    //Declare Variables
    int choice=1;
    
    //Start of Loop
    while (choice <=11)
    {
        
        cout<<"::Menu::\n\n" //Start of the Menu
                <<"1. Question 1\n"
                <<"2. Question 2\n"
                <<"3. Question 3\n"
                <<"4. Question 4\n"
                <<"5. Question 5\n"
                <<"6. Question 6\n"
                <<"7. Question 7\n"
                <<"8. Question 8\n"
                <<"9. Question 9\n"
                <<"10. Question 10\n"
                <<"11. Exit Program\n\n"
                <<"Choice: \n";
        cin>>choice;
        switch (choice){
            case 1:
                cout<<"Question 1\n\n";
                
                break;
            case 2:
                cout<<"Question 2\n\n";
                break;   
            case 3:
                cout<<"Question 3\n\n";
                break;
            case 4:
                cout<<"Question 4\n\n";
                break;
            case 5:
                cout<<"Question 5";
            case 6:               
                cout<<"Question 6\n\n";
                break;
            case 7:
                cout<<"Question 7\n\n";
                break;
            case 8:
                cout<<"Question 8\n\n";
                break; 
            case 9:
                cout<<"Question 9\n\n";
                break;
            case 10:
                cout<<"Question 10\n\n";
                break;
            case 11:
                break;
            default:cout<<"Exiting Program\n";
        }
   }
    return 0; 
}


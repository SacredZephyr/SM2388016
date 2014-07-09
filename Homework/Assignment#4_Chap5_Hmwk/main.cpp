/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 *
 * Created on July 9, 2014, 10:53 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string.h>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here...
int main(int argc, char** argv) {
    
    //Declare Variables
    int choice=1;
    
    //Start of Loop
    do
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
                <<"Choice: \n\n";
        cin>>choice;
        cin.ignore();
        switch (choice)
        {
            case 1:
            { 
                //End of Question 1
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            }
            case 2:
            {
                //End of Question 2
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            }
            case 3:
            {
                //End of Question 3
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            }   
            case 4:
            {
                //End of Question 4
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            }
            case 5:
            {
                //End of Question 5
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            }
            case 6:
            {
                //End of Question 6
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            }
            case 7:
            {
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;//End of Question 7
            }
            case 8:
            {
                //End of Question 8
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            }
            case 9:
            {
                
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;//End of Question 9
            }   
            case 10:
            {
                
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;//End of Question 10
            }
            default:
            {
                cout<<"Exiting Program\n";
            }
        }
   }while (choice<=10);
}
/* 
 * File:   main.cpp
 * Author: Sergio R Montalvan
 * Created on July 2, 2014, 12:20 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
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
                cout<<"Question 1:The Greater Number\n\n";
                //Declare Variables of Question 1
                unsigned int num1,num2,num3;
                
                //Input
                cout<<"Input first number...";
                cin>>num1;
                cin.ignore();
                cout<<"Input second number...";
                cin>>num2;
                cin.ignore();
                
                //Calculation
                num3=(num1>=num2)? num1:num2;
                
                //Output
                cout<<"The greater number is "<<num3<<endl<<endl;
                
                //End of Question 1
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            case 2:
                cout<<"Question 2:A Roman Numeral\n\n";
                //Declare Variables of Question 2
                //The Variable is the same as the very beginning of code
                //Input
                cout<<"Choose a number from 1-10\n";
                cin>>choice;
                cin.ignore();
                cout<<"That Number's Roman Numeral is\n";
                switch(choice)
                {
                    case 1:
                        cout<<"Roman Numeral : I\n\n";
                        break;
                    case 2:
                        cout<<"Roman Numeral : II\n\n";
                        break;
                    case 3:
                        cout<<"Roman Numeral : III\n\n";
                        break;
                    case 4:
                        cout<<"Roman Numeral : IV\n\n";
                        break;
                    case 5:
                        cout<<"Roman Numeral : V\n\n";
                        break;
                    case 6:
                        cout<<"Roman Numeral : VI\n\n";
                        break;
                    case 7:
                        cout<<"Roman Numeral : VII\n\n";
                        break;
                    case 8:
                        cout<<"Roman Numeral : VIII\n\n";
                        break;
                    case 9:
                        cout<<"Roman Numeral : IX\n\n";
                        break;
                    case 10:
                        cout<<"Roman Numeral : X\n\n";
                        break;
                    default:cout<<"Incorrect Number Input\n\n";    
                }//End of Question 2
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            case 3:
                cout<<"Question 3:A Magic Year or Not\n\n";
                //Declare Variables
                unsigned short Yr;//The Year Inputted
                unsigned short Mnth,Day;//The Month and Day Inputted
                
                //Input
                cout<<"What Month?\n";
                cin>>Mnth;
                cin.ignore();
                cout<<"What Day?\n";
                cin>>Day;
                cin.ignore();
                cout<<"What Year (the last two digits)?\n";
                cin>>Yr;
                cin.ignore();
                
                //Output
                if(Yr==Mnth*Day)
                {
                    cout<<"This Year is a Magic Year!\n";
                }
                if(Yr!=Mnth*Day)
                {
                    cout<<"This Year is Not a Magic Year!\n\n";
                }
                //End of Question 3
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            case 4:
                cout<<"Question 4:Which Rectangle is Larger?\n\n";
                //Declare Variables
                float RectL1,RectL2;//Rectangle Length 1&2
                float RectW1,RectW2;//Rectangle Width 1&2
                float ARect1,ARect2;//Area of Rectangles 1&2
                
                //Input
                cout<<"What is the Length of the First Rectangle?\n";
                cin>>RectL1;
                cin.ignore();
                cout<<"What is the Width of the First Rectangle?\n";
                cin>>RectW1;
                cin.ignore();
                cout<<"What is the Length of the Second Rectangle?\n";
                cin>>RectL2;
                cin.ignore();
                cout<<"What is the Width of the Second Rectangle?\n";
                cin>>RectW2;
                cin.ignore();
                
                //Calculations
                ARect1=RectL1*RectW1;
                ARect2=RectL2*RectW2;
                
                //Output
                if(ARect1>=ARect2)
                {
                    cout<<"Rectangle 1's Area is Larger!\n\n";
                }
                if(ARect1<=ARect2)
                {
                    cout<<"Rectangle 2's Area is Larger!\n\n";
                }
                //End of Question 4
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            case 5:
                cout<<"Question 5:BMI Calculator\n\n";
                //Declare Variables
                float BMI,Wgt,Ht;//Body Mass Index, Weight, and Height
                
                //Input
                cout<<"How many pounds do you weigh?\n";
                cin>>Wgt;
                cin.ignore();
                cout<<"What is your height in inches?\n";
                cin>>Ht;
                cin.ignore();
                
                //Calculation
                BMI=(Wgt*7.03e2f)/pow(Ht,2.0e0f);
                
                //Output
                cout<<setprecision(2)<<fixed<<endl;
                cout<<"Your BMI is "<<BMI<<endl;
                if(BMI>=25)
                {
                    cout<<"You Are OverWeight!\n";
                }
                else if(BMI<=18.5)
                {
                    cout<<"You Are UnderWeight!\n";
                }
                else if(25>=BMI<=18.5)
                {
                    cout<<"You Are at an Average Weight!\n";
                }//End of Question 5
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            case 6:               
                cout<<"Question 6:Weight Calculations\n\n";
                //Declare Variables
                int Mass;//The Mass of the Object
                int Wght;//The Weight of the Object
                //Input
                cout<<"What is the mass of the object in Kilograms?\n";
                cin>>Mass;
                cin.ignore();
                
                //Calculations
                Wght=Mass*9.8e0;
                
                //Ouput
                cout<<"The weight of the object in newtons is "
                        <<Wght<<endl;
                if(Wght>=1000)
                {
                    cout<<"The Object is too heavy!\n";
                }
                if(Wght<=10)
                {
                    cout<<"The Object is too light!\n";
                }
                //End of Question 6
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            case 7:
                cout<<"Question 7:Time Calculator\n\n";
                //Declare Variables
                float sec,min,hrs,day;//The Seconds,Minutes,Hours,and Days
                
                //Input
                cout<<"How many seconds?\n";
                cin>>sec;
                cin.ignore();
                cout<<"\n\n";
                
                //Calculations
                min=sec/6.0e1f;
                hrs=sec/3.6e3f;
                day=sec/8.64e4f;
                
                //Output
                if(6.0e1f>sec<3.6e3f)
                {
                    cout<<"There are "<<min<<" minute(s)!\n";
                }
                else if(3.6e3f>sec>8.64e4f)
                {
                    cout<<"There are "<<hrs<<" hour(s)!\n";
                }
                else if(sec<8.64e4f)
                {
                    cout<<"There are "<<day<<" day(s)!\n";
                }
                else cout<<"There are "<<sec<<" second(s)!\n";
                
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            case 8:
                cout<<"Question 8:Counting Change\n\n";
                //Declare Variables
                float Qtr,Nck,Dme,Pnn;//The Amount of Quarters, Nickels,Dimes, and Pennies
                float Dllr;//The Dollars
                
                //Input
                cout<<"How many pennies are there?\n";
                cin>>Pnn;
                cin.ignore();
                cout<<"How many nickels are there?\n";
                cin>>Nck;
                cin.ignore();
                cout<<"How many dimes are there?\n";
                cin>>Dme;
                cin.ignore();
                cout<<"How many quarters are there?\n";
                cin>>Qtr;
                cin.ignore();
                
                //Calculations
                
                Dllr=(Qtr*0.25e0f)+(Dme*0.1e0f)+(Nck*0.05e0f)+(Pnn*0.01e0f);
                
                //Output
                if(Dllr==1)
                {
                    cout<<"You have exactly one whole dollar! CONGRATULATIONS!\n";
                }
                else if (Dllr<1)
                {
                    cout<<"You have less than one dollar, you have $"<<Dllr<<endl;
                }
                else if(Dllr>1)
                {
                    cout<<"You have more than one dollar, you have $"<<Dllr<<endl;
                }
                //End of Question 8
                cout<<"Press Enter to continue...\n";
                cin.ignore();
                break;
            case 9:
                cout<<"Question 9\n\n";
                break;
            case 10:
                cout<<"Question 10\n\n";
                break;
            default:cout<<"Exiting Program\n";
        }
   }while (choice <=10);
    return 0; 
}


/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream> 
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
double MilesPerGallon(int liter, int miles){   // function to calculate mpg
       double mpg;
       mpg = miles/(liter*0.264179);
       
       return mpg;
    }
//Execution Begins Here!
int main(int argc, char** argv) {

    //Set the random number seed
    
    //Declare Variables
    double milCar1, milCar2,literCar1,literCar2;  // variables for miles+liters for cars 1 and 2 
    char option;                                // variable for option to go again
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Car 1" << endl;                                // outputting header
    cout << "Enter number of liters of gasoline:" << endl;  // outputting question
    cin >> literCar1;                                       // asking for liters for car 1
    cout << "Enter number of miles traveled:" << endl;      //outputting question
    cin >> milCar1;                                         //asking for miles for car 1
    
    cout << "miles per gallon: " << fixed << setprecision(2) << MilesPerGallon(literCar1,milCar1) << endl << endl;  // outputting mpg for car 2
    
    
    cout << "Car 2" << endl;                                // outputting header
    cout << "Enter number of liters of gasoline:" << endl;  // outputting question
    cin >> literCar2;                                       // asking for liters for car 2
    cout << "Enter number of miles traveled:" << endl;      //outputting question
    cin >> milCar2;                                         // asking for miles for car 1
    
    cout << "miles per gallon: " << fixed << setprecision(2) << MilesPerGallon(literCar2,milCar2) << endl << endl;  // outputting mpg for car 2
    
    if ( MilesPerGallon(literCar1,milCar1)> MilesPerGallon(literCar2,milCar2))      // if statement to check which car has more miles per gallon
        cout << "Car 1 is more fuel efficient"<< endl << endl;                      // statement if car 1 has more miles
    else
        cout << "Car 2 is more fuel efficient"<< endl << endl;                      // statement if car 2 has more miles
    
    cout << "Again:" << endl;                                           // asking if user wants to go again
    cin >> option;
    cout << endl;
    while (option == 'y' || option == 'Y'){                         // while loop stating to go again if option is y
       cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> literCar1;
        cout << "Enter number of miles traveled:" << endl;
        cin >> milCar1;
    
        cout << "miles per gallon: " << fixed << setprecision(2) << MilesPerGallon(literCar1,milCar1) << endl << endl;
    
    
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> literCar2;
        cout << "Enter number of miles traveled:" << endl;
        cin >> milCar2;
    
        cout << "miles per gallon: " << fixed << setprecision(2) << MilesPerGallon(literCar2,milCar2) << endl << endl;
    
        if ( MilesPerGallon(literCar1,milCar1)> MilesPerGallon(literCar2,milCar2))
            cout << "Car 1 is more fuel efficient"<< endl << endl;
        else
            cout << "Car 2 is more fuel efficient"<< endl << endl;
    
        cout << "Again:" << endl;
        cin >> option;
    if (option == 'n' || option == 'N'){                // while loop stating to break loop if option is n
        break;
    }
    }   
    //Exit stage right or left!
/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
    double MilesPerGallon(int liter, int miles){        // Function to calculate mpg
       double mpg;
       mpg = miles/(liter*0.264179);
       
       return mpg;
    }
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int lit;        // liter
    double mpg;     // milespergallon
    int mil;        // miles
    char option;    // option of y or n 
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
   
    
    
    //Display the outputs
    cout << "Enter number of liters of gasoline:" << endl;  // statement asking for liters
    cin >> lit;                                             // gets users input for liters
    cout << endl;   
    
    cout << "Enter number of miles traveled:" << endl;      // statement asking for miles
    cin >> mil;                                             // gets users input for miles
    cout << endl;
    
    cout << "miles per gallon:" << endl;
    cout << fixed << setprecision(2) << MilesPerGallon(lit,mil) << endl;    //outputs mpg
    
    cout << "Again:" << endl;                   //statemetn asking for option 
    cin >> option;                              // gets user input for option
    cout << endl;
    while (option == 'y' || option == 'Y'){
        
       
        
        
        cout << "Enter number of liters of gasoline:" << endl;
         cin >> lit;
        cout << endl;
    
        cout << "Enter number of miles traveled:" << endl;
        cin >> mil;
        cout << endl;
    
        cout << "miles per gallon:" << endl;
        cout << fixed << setprecision(2) << MilesPerGallon(lit,mil) << endl;
    
        cout << "Again:" << endl;
        cin >> option;
        
        
        if (option == 'n' || option == 'N'){
        break;
    }
    }
     
    //Exit stage right or left!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int num;    // variable for num (input)
    int length;     // variable for length of rectangle
    int height;     // variable for height of rectangle 
    char letter;    // variable for character input
    
    //Initialize or input i.e. set variable values
    cin >> num;
    cin >> letter;
    //Map inputs -> outputs
    if (num<1 || num>15){
        cout << "Invalid number, enter a number between 1 and 15" << endl;
    }
    else {
        
            for (height=0; height<num; height++){           //for loops to calculate the rectangle
                for (length=0;length<num;length++){
                    cout<<letter;
                }
            if (height<num-1)
                cout<<endl;
            }
            
        }
        
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
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
    int sum = 0;    //initialize sum with 0
    int num;        // variable for input
    int i;          //variable for for loop/ count
    //Initialize or input i.e. set variable values
    cin >> num; // ask for inout
    //Map inputs -> outputs
    for (i=1; i <= num; i++){           // for loop to calculate sum of inout
        sum = sum + i;
    }
    //Display the outputs
    cout << "Sum = " << sum;        
    //Exit stage right or left!
    return 0;
}

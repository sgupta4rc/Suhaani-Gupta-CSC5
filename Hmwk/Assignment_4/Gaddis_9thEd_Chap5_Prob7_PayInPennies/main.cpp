/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 * Created on January 2, 2019, 12:36 PM
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int i;
    double days;    //variable for days(input)
    double pay;     
    double total;
    
    pay = 0.01;
    total = 0.0;
    //Initialize or input i.e. set variable values
    cin >> days;        // getting input from user
    //Map inputs -> outputs
    for (i=1; i<=days; i++){    //for loop to calculate total pay
        total = pay + total;
        pay = pay * 2;
        
    }
    //Display the outputs
    cout << "Pay = $" << fixed << setprecision(2) << total; //output to display total pay
    //Exit stage right or left!
    return 0;
}
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
    int num = 0;    //Initialize num (input)
    int max = 0;    //Initialize max 
    int min = 100000000;    //Initialize min
    
   
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    while (num != -99){     //while loop to calculate min and max
        cin >> num;
    if (num == -99)
        break;
    if (num>max)
        max=num;
    if (num<min)
        min=num;
    
    }
    //Display the outputs
    cout << "Smallest number in the series is " << min << endl;     // display min and max
    cout << "Largest  number in the series is " << max;
    //Exit stage right or left!
    return 0;
}
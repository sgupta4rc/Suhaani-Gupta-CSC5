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
    int size;
    int rows;
    int cols;
    
    //Initialize or input i.e. set variable values
    cin >> size;
    //Map inputs -> outputs
    for (rows=1; rows<=size; rows++){
        for(cols=1; cols<=rows; cols++){
            cout <<"+";
        }
        cout << endl<<endl;
    }
    
    for (rows=1; rows<=size; rows++){
        for(cols=1; cols<=size-rows+1; cols++){
            cout <<"+";
        }
        if (rows<size)
            cout << endl<< endl;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
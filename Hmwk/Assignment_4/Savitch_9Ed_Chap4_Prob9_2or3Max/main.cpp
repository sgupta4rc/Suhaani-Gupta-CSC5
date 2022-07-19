/* 
 * File:   
 * Author: 
 * Created on 
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
    double num1, num2, num3, max1, max2;
    cout<<"Enter first number:" << endl<<endl;
    cin>>num1;
    cout<<"Enter Second number:" << endl<<endl;
    cin>>num2;
    cout<<"Enter third number:" << endl<<endl;
    cin>>num3;
    
    if (num1>num2)
      max1=num1;
    else
      max1=num2;
    
    if (num3>max1)
      max2=num3;
    else
      max2=max1;
     
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Largest number from two parameter function:" << endl << max1 << endl << endl;
    cout << "Largest number from three parameter function:" << endl << max2 << endl; 
    return 0;
}
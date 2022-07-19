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
float InflationRate(double currentPrice, double yearAgoPrice){      // function to find inflation rate 
    return ((currentPrice-yearAgoPrice)*100/yearAgoPrice);  
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    bool flag;                          // true or false variable for while loop is defined
    double curPrice,lastPrice,inflation;        // current price, last price, and inflation rate price is defined
    char more;                              // character variable is defined
    //Initialize or input i.e. set variable values
    flag=true;
    //Map inputs -> outputs
    
    //Display the outputs
    while (flag)
    {
        cout<<"Enter current price:"<<endl;
        cin>>curPrice;
        cout<<"Enter year-ago price:"<<endl;
        cin>>lastPrice;
        cout<<"Inflation rate: " <<fixed << setprecision(2)<<InflationRate(curPrice,lastPrice)<<"%"<<endl << endl;
        cout << "Again:" << endl;
        cin>>more;
        if (more=='n')
            flag=false;
        else
            cout << endl;
    }
    //Exit stage right or left!
    return 0;
}
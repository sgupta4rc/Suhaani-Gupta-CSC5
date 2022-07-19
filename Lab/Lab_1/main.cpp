/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on July 1, 2022, 12:05 AM
 */

#include <iostream>

using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float gasgage, // Gas Gage % Full
          tank, // Max Gallon Capacity of Tank
          mpg, // Gas Mileage
          gallreq, // Remaining Gallons to fill up tank
          dis1, // Distance to gas station 1
          distot1, // Distance to and from Gas station 1
          totmpg1, // Total mpg to and from Gas Station 1
          gasprice1, // Price of gas per gallon at Gas station 1
          totgas1, // Total gallons used to drive to Gas station 1
          totgasprice1, // Total cost of gs driving to Gas Station 1
          totgal1, // Total gallons of gas used to drive to and from gas station 1
          totcostmil1, // Total cost with mileage to gas station 1
          tot1; // Price per gallon when adding in mileage to gas station 1
    
    
    //Initialize Variables
    gasgage = .75;
    tank = 22.0;
    mpg = 17.0;
    dis1 = 10.0;
    gasprice1 = 4.25;
    
    
    //Map inputs to outputs -> The Process
    
    gallreq = tank -(gasgage*tank);
    distot1 = dis1*2;
    totgas1 = distot1/mpg;
    totgasprice1 = totgas1*gasprice1;
    totgal1 = gallreq+totgas1;
    totcostmil1=totgal1*gasprice1;
    tot1 = totcostmil1/gallreq; 
    
    //Display Results
    cout << "Total cost for Gas Station 1: " << tot1 << " dollars." << endl;
    
    
    //Declare Variables
     float dis2,  // Distance to gas station 2
          distot2, // Distance to and from Gas station 2
          totmpg2, // Total mpg to and from Gas Station 2
          gasprice2, // Price of gas per gallon at Gas station 2
          totgas2, // Total gallons used to drive to Gas station 2
          totgasprice2, // Total cost of gs driving to Gas Station 2
          totgal2, // Total gallons of gas used to drive to and from gas station 2
          totcostmil2, // Total cost with mileage to gas station 2
          tot2; // Price per gallon when adding in mileage to gas station 2
     
     //Initialize Variables
    gasgage = .75;
    tank = 22.0;
    mpg = 17.0;
    dis2 = 20.0;
    gasprice2 = 4.09;
    
    
    //Map inputs to outputs -> The Process
    gallreq = tank -(gasgage*tank);
    distot2 = dis2*2;
    totgas2 = distot2/mpg;
    totgasprice2 = totgas2*gasprice2;
    totgal2 = gallreq+totgas2;
    totcostmil2=totgal2*gasprice2;
    tot2 = totcostmil2/gallreq; 
    
    //Display Results
    cout << "Total cost for Gas Station 2: " << tot2 << " dollars." << endl;

    return 0;
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on July 1, 2022, 2:15 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
        
    //Declare Variables
    float purchase,
          state_tax, // state sales tax
          county_tax, // county sales tax
          total_tax; // original purchase price
    
    //Initialize Variables
    state_tax = 0.04;
    county_tax = 0.02;
    purchase = 95.00;
    
    //Map inputs to outputs -> The Process
    total_tax = (state_tax*purchase) + (county_tax*purchase);
    
    //Display Results
    cout << "The total sales tax is: " << total_tax << " dollars." << endl;
    
    return 0;
}


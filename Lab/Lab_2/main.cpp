/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on July 8, 2022, 11:23 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float costpgal, // gas cost per gallon (in dollars)
          amnttax, // amount of tax collected by government (in dollars)
          percentgastax, // Percentage gas tax
          mat, // money after taxes (in dollars)
          pftmd; // Profit made by gas companies (in dollars)
    
    //Input amount it cost per gallon last time you put gas in your car
    cout << "Input amount it cost per gallon last time you put gas in your car: " << endl;
    cin >> costpgal;
    
    //Calculate total taxes on 1 gallon 
    
    amnttax = (costpgal * 0.08) + 0.39 + 0.10 + 0.184;
    
    //Calculate cost of sale after taxes
    mat = costpgal - amnttax;
    
    //Calculate percentage gas tax
    percentgastax = (amnttax/costpgal) * 100;
    
    //Calculate profit made from 1 gallon of gas
    pftmd = mat * 0.065;
    
    // Display percentage gas tax on 1 gallon
    cout << fixed << setprecision(2) << "Percentage Gas Tax on a gallon of gas = " << percentgastax << "%" << endl;
    
    // Display profit made by gas company
    cout << "Profit made by the gas company from a gallon of gas = $" << pftmd << endl;
    
    //Taxes to the government
    cout << "Amount of taxes to the government = $" << amnttax << endl;
    
            
    

    return 0;
}


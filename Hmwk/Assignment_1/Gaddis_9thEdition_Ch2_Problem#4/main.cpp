/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on July 1, 2022, 2:24 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    float meal_charge, // original cost of meal
          tax, // tax percent
          tip, // tip percent
          tax_amount, // tax amount in dollars
          tip_amount, // tip amount in dollars
          total_bill; // total bill including tax and tip
    
    // Initialize Variables
    meal_charge = 88.67;
    tax = 0.0675;
    tip = 0.20;
    
    // Map inputs to outputs -> The Process
    tax_amount = meal_charge*tax;
    tip_amount = meal_charge*tip;
    total_bill = meal_charge + tax_amount + tip_amount;
    
    //Display Results
    cout << "Meal Cost: $" << meal_charge << endl;
    cout << "Tax Amount: $" << tax_amount << endl;
    cout << "Tip Amount: $" << tip_amount << endl;
    cout << "Total Bill: $" << total_bill << endl;
    

    return 0;
}


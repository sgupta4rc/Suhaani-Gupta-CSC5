/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on July 1, 2022, 2:45 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float payAmount,
          payPeriods,
          annualPay;
    
    payAmount = 2200.0;
    payPeriods = 26.0;
    
    annualPay = payAmount*payPeriods;
    
    cout << annualPay<< endl;
    return 0;
}


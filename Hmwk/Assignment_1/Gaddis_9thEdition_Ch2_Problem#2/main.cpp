/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gsuha
 *
 * Created on July 1, 2022, 1:57 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    float percent;
    float sales;
    float total;
    
    //Initialize Variables
    percent = 0.58;
    sales = 8600000;
    
    //Map inputs to outputs -> The Process
    total = sales*percent;
    
    //Display Results
    cout << "The Company will generate " << total << " dollars." << endl;

    return 0;
}


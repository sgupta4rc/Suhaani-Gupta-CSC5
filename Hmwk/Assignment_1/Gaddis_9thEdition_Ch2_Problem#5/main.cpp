/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on July 1, 2022, 2:38 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    float num1,
        num2,
        num3,
        num4,
        num5,
        sum,
        totalnum,
        average;
    
    //Initialize Variables
    num1 = 28;
    num2 = 32;
    num3 = 37;
    num4 = 24;
    num5 = 33;
    totalnum = 5;
    
    // Map inputs to outputs -> The Process
    sum = num1+num2+num3+num4+num5;
    average = sum/totalnum;
    
    //Display Results
    cout << "The Average is: " << average << endl;
    
    return 0;
}


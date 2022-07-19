/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on July 1, 2022, 2:49 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float currlevel,
          riseperyear,
          level5,
          level7,
          level10;
    
    currlevel = 1.5;
    riseperyear = 1.5;
    
    level5 = (riseperyear*5)-1.5;
    level7 = (riseperyear*7)- level5;
    level10 = (riseperyear*5)-level7;
    
    cout<< "In 5 Years: "<< level5<< endl;
    cout << "In 7 years: "<<level7<< endl;
    cout << "In 10 years: "<<level10<< endl;
    
    return 0;
}


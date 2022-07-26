/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on July 24, 2022, 10:01 PM
 */

#include <iostream>
#include <cstdlib> //for rand and srand
#include <cstdio>
#include <string>
#include <ctime>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 
    bool flag1=true;
    bool flag2=true;
    char response;
    int firstcard;
    int secondcard;
    int newcard;
    int sum=0;
    int BET=1;
    string cards;

    while (flag1)
    {
        srand (time(NULL));
        cout<<"Player 1's cards are being served by dealer... "<<endl<<endl;
        firstcard = 1+(rand() % 13);//generating different values using rand ranging from 0to13
        if (firstcard>=11 && firstcard<=13)
            firstcard=10;
        sum+=firstcard;     
        secondcard = 1+(rand() % 13);//generating different values using rand ranging from 0to13
        if (secondcard>=11 && secondcard<=13)
            secondcard=10;
        sum+=secondcard;
        cards=to_string(firstcard) + ", " + to_string(secondcard);
        cout<<"Your cards : "<<cards<<" , total= "<<sum<<endl;
        while (flag2){
            cout<<"do you want stand or hit? (h for hit -- s for stand) "<<endl<<endl;
            cin>>response;
            if (response=='h' || response == 'H'){
                newcard = 1+(rand() % 13);//generating different values using rand ranging from 0to13
                if (newcard>=11 && newcard<=13)
                    newcard=10;
                sum+=newcard;
                cards=cards+", "+to_string(newcard);
                cout<<"Your cards : "<<cards<<" total = "<<sum<<endl;
                if (sum>21){
                    cout<<"You are bursted. You lose $"<<BET<<" to the dealer"<<endl<<endl;
                    flag2=false;
                    flag1=false;
                }
            }
            else {
                cout<<"You chose to stand..., Now dealer will take the turn"<<endl;
                flag2=false;
            }

        }
        flag1=false;    
    }
    return 0;  
}

    



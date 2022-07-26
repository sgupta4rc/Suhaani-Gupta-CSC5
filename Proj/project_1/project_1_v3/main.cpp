/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Suhaani Gupta
 *
 * Created on June 24, 2022, 1:36 AM
 */

#include <iostream>
#include <cstdlib> //for rand and srand
#include <cstdio>
#include <string>
#include<ctime>
#include <fstream>

using namespace std;

// User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensional arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Seed
    
    //Declare Variables
    bool flag1=true;
    bool flag2=true;
    bool dealerflag=true;
    char response;
    int firstcard;
    int secondcard;
    int dealercard;
    int newcard;
    int sum=0;
    int dealersum=0;
    int BET=1;
    int balance;
    balance=100;
    string cards;
    string dealercards;
    string playername;
    ofstream bjfile;
    // Initialize Variables
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    bjfile.open("/Users/manmo/Documents/Blackjack.txt",ios::out);
    if(!bjfile.is_open()){
        cout<<"File to write log could not be open. So, no log of the session will be written"<<endl;
    }
    bjfile << "blackjack";
    bjfile << "How are you?";

    cout<<"This is Suhaani's blackjack game that you can play with the dealer"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"What is your name"<<endl;
    cin>>playername;
    cout<<"Welcome "<<playername<<" to Suhaani's Blackjack game"<<endl;
    cout<<"How many counters you want to buy? Each is worth one dollar"<<endl<<endl;
    cin>>balance;
    cout<<playername<<" is playing Suhaani's blackjack with "<<balance<<" dollars"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl<<endl;

    while (flag1)
    {
        srand (time(NULL));
        cout<<"Dealer serving your first two cards. Here it goes... "<<endl<<endl;
        firstcard = 1+(rand() % 13);//generating different values using rand ranging from 0to13
        if (firstcard>=11 && firstcard<=13)
            firstcard=10;
        sum+=firstcard;     
        secondcard = 1+(rand() % 13);//generating different values using rand ranging from 0to13
        if (secondcard>=11 && secondcard<=13)
            secondcard=10;
        sum+=secondcard;
        cards=to_string(firstcard) + ", " + to_string(secondcard);
        cout<<"Your cards : "<<cards<<endl<<"Total= "<<sum<<endl<<endl;

        //Now dealer will open his first card
        //.....................................................................
        dealercard = 1+(rand() % 13);//generating different values using rand ranging from 0to13
        if (dealercard>=11 && firstcard<=13)
            dealercard=10;
        else if (dealercard==1){
            dealercard=11;
            cout<<"Dealer first card is 1, hence it is treated as 11"<<endl<<endl;     
        }
        dealersum+=dealercard;   
        dealercards=to_string(dealercard);
        cout<<"Dealer's Turn..Dealer open her first card..."<<endl;
        cout<<dealercard<<endl;
        cout<<"Dealer Total is : "<<dealersum<<endl<<endl;
        //................................................................................

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
        //dealer will draw second card for herself....
        cout<<"Now dealer is opening her second card..."<<endl;
        
        do {
            dealercard = 1+(rand() % 13);//generating different values using rand ranging from 0to13
            if (dealercard>=11 && firstcard<=13)
                dealercard=10; 
            dealersum+=dealercard;
            dealercards=dealercards+", "+to_string(dealercard);
            cout<<"Dealer cards are "<<dealercards<<endl;
            cout<<"Dealer total is : "<<dealersum<<endl;

            if (dealersum>21) {
            cout<<"Dealer bursted out... Hence you won the game"<<endl;
            cout<<"Dealer paid you $"<<BET<<endl;
            balance+=BET;
            cout<<"Your new balance is : $"<<balance<<endl;
            dealerflag=false;

             }
            else if (dealersum>=17|| dealersum<=21){ //dealer has to stand      
                cout<<"Dealer total is 17 or more. Hence dealer will have to stand"<<endl;
                dealerflag=false;
            }
            else if (dealersum==21) {
                cout<<"Dealer got blackjack!. Your "<<BET<<" $ bet went to the dealer"<<endl;
                balance--;
                cout<<"Your new balance is : $"<<balance<<endl;
                dealerflag=false;
            }

            else {
                cout<<"Dealer total is 16 or less. Hence dealer will have to hit"<<endl;  
            }
        }while (dealerflag);

        if (dealersum>21) {
            cout<<"Dealer bursted out... Hence you won the game"<<endl;
            cout<<"Dealer paid you $"<<BET<<endl;
            balance+=BET;
            cout<<"Your new balance is : $"<<balance<<endl;

        }
        else if (dealersum>sum){
            cout<<"Dealer Won!. Your "<<BET<<" $ bet went to the dealer"<<endl;
            balance--;
            cout<<"Your new balance is : $"<<balance<<endl;
        }
        else if (sum>dealersum){
            cout<<"You Won"<<endl;
            cout<<"Dealer paid you $"<<BET<<endl;
            balance+=BET;
            cout<<"Your new balance is : $"<<balance<<endl;
        }
        else{
            cout<<"Your total is equal to that of builder's. Game draws. You get your bet back"<<endl<<endl;
        }

        flag1=false;    
    }
bjfile.close();
    
    
    //Exit stage right
    return 0;
}

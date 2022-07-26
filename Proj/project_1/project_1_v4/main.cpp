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
    bool gameloop=true;
    bool gameinnerloop=true;
    bool dealerflag=true;
    bool playerBJ=false;
    bool gamemasterloop=true;
    bool dealerBJ=false;
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
    bjfile.open("Sblackjack.txt");
    if(!bjfile.is_open()){
        cout<<"File to write log could not be open. So, no log of the session will be written"<<endl;
    }

    cout<<"This is Suhaani's blackjack game. You play against the dealer"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"What is your name?"<<endl;
    getline(cin,playername);
    cout<<"Welcome "<<playername<<" to Suhaani's Blackjack game"<<endl;
    cout<<"How many counters do you want to buy? (Each is worth one dollar)"<<endl<<endl;
    cin>>balance;
    cout<<playername<<" is playing Suhaani's blackjack with "<<balance<<" dollars"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl<<endl;

    //writing log to the files
    bjfile<<"new Session for play started by started by "<<playername<<endl;
    bjfile<<playername<< " is playing with " <<balance<<" Dollars"<<endl;
    
    while (gamemasterloop) {

        while (gameloop)
        {
            srand (time(NULL));
            cout<<"Dealer serving your first two cards. Here it goes... "<<endl<<endl;
            bjfile<<"Dealer serving your first two cards. Here it goes... "<<endl<<endl; //writing to log file
            firstcard = 1+(rand() % 13);//generating different values using rand ranging from 1 to 13
            if (firstcard>=11 && firstcard<=13)
                firstcard=10;
       
            secondcard = 1+(rand() % 13);//generating different values using rand ranging from 1 to 13
            if (secondcard>=11 && secondcard<=13)
                secondcard=10;
        
            if (firstcard==1){
                firstcard=11;
                cout<<"your first card is 1. Hence it is treated as 11"<<endl;
                bjfile<<"your first card is 1. hence it is treated as 11"<<endl;//writing log to file
            }

            if (firstcard!=1 && secondcard==1){
                cout<<"Your second card is 1. Hence it is treated as 11"<<endl;
                bjfile<<"Your second card is 1. Hence it is treated as 11"<<endl;//writing log to file
                secondcard=11;
            } 
            sum+=firstcard;    
            sum+=secondcard;  
            cards=to_string(firstcard) + ", " + to_string(secondcard); 

            cout<<"Your cards : "<<cards<<endl<<"Total= "<<sum<<endl<<endl;
            bjfile<<"Your cards : "<<cards<<endl<<"Total= "<<sum<<endl<<endl; //writing to log file
       
            if (sum==21){
                playerBJ=true;
                cout<<"Wow! you hit a blackjack.."<<endl;
                bjfile<<"Wow! you hit a blackjack.."<<endl;//writing log to file
            }
            //Now dealer will open his first card
            //.....................................................................
            cout<<"Dealer's Turn..Dealer open her first card..."<<endl;
            bjfile<<"Dealer's Turn..Dealer open her first card..."<<endl;//writing log to file 
       
            dealercard = 1+(rand() % 13);//generating different values using rand ranging from 1 to 13
        
            if (dealercard>=11 && firstcard<=13){
                dealercard=10;
            }
            else if (dealercard==1){
                dealercard=11;
                cout<<"Dealer first card is 1, hence it is treated as 11"<<endl<<endl;
                bjfile<<"Dealer first card is 1, hence it is treated as 11"<<endl<<endl;  //writing log to file   
            }
            cout<<dealercard<<endl;
            bjfile<<dealercard<<endl;//writing log to file
            dealersum+=dealercard;   
            dealercards=to_string(dealercard);
      
            cout<<"Dealer Total is : "<<dealersum<<endl<<endl;  
            bjfile<<"Dealer Total is : "<<dealersum<<endl<<endl;//writing log to file

            //................................................................................
            cout<<"------------------------------------------------------"<<endl;
            cout<<"Your turn now.....";

            while (gameinnerloop && !playerBJ){
                cout<<"do you want stand or hit? (h for hit / s for stand) "<<endl<<endl;
                bjfile<<"do you want stand or hit? (h for hit / s for stand) "<<endl<<endl;//writing log to file
                cin>>response;

                if (response=='h' || response == 'H'){
                    newcard = 1+(rand() % 13);//generating different values using rand ranging from 0to13
                    if (newcard>=11 && newcard<=13)
                    newcard=10;
                    if (newcard==1 && (sum+11)<21)
                        newcard=11;
                    sum+=newcard;
                    cards=cards+", "+to_string(newcard);
                    cout<<"Your cards : "<<cards<<" total = "<<sum<<endl;
                    bjfile<<"Your cards : "<<cards<<" total = "<<sum<<endl;//writing log to file

                    if (sum==21){
                        playerBJ=true;
                        cout<<"Wow! you hit a blackjack.."<<endl;
                        bjfile<<"Wow! you hit a blackjack.."<<endl;//writing log to file
                        gameinnerloop=false;
                    }
               
                    if (sum>21){
                        cout<<"You are bursted. You lose $"<<BET<<" to the dealer"<<endl<<endl;
                        bjfile<<"You are bursted. You lose $"<<BET<<" to the dealer"<<endl<<endl;//writing log to file
                        balance=balance-BET;
                        gameinnerloop=false;
                        gameloop=false;
                    }
                }//end of if
                else {
                    cout<<"You chose to stand..., Now dealer will take the turn"<<endl<<endl;
                    bjfile<<"You chose to stand..., Now dealer will take the turn"<<endl<<endl;//writing log to file
                    gameinnerloop=false;
                }

            }//end of innergameloop

            //dealer will draw second card for herself....

            if (gameloop){       
                cout<<"Now dealer is opening her second card..."<<endl;
                bjfile<<"Now dealer is opening her second card..."<<endl;//writing log to file
        
                do {
                    dealercard = 1+(rand() % 13);//generating different values using rand ranging from 0to13

                    if (dealercard>=11 && firstcard<=13)
                        dealercard=10; 

                    if (dealercard==1 && (dealersum+11<21))
                        dealercard=11;     

                    dealersum+=dealercard;
                    dealercards=dealercards+", "+to_string(dealercard);
                    cout<<"Dealer cards are "<<dealercards<<endl;
                    cout<<"Dealer total is : "<<dealersum<<endl;
                    bjfile<<"Dealer cards are "<<dealercards<<endl;//writing log to file
                    bjfile<<"Dealer total is : "<<dealersum<<endl;//writing log to file

                    if (dealersum>21) {
                        cout<<"Dealer bursted out... Hence you won the game"<<endl;
                        cout<<"Dealer paid you $"<<BET<<endl;
                        bjfile<<"Dealer bursted out... Hence you won the game"<<endl;//writing log to file
                        bjfile<<"Dealer paid you $"<<BET<<endl;//writing log to file
                        balance+=BET;
                        cout<<"Your new balance is : $"<<balance<<endl;
                        bjfile<<"Your new balance is : $"<<balance<<endl;//writing log to file
                        dealerflag=false;
                        //break;
                    }
                    else if (dealersum>=17|| dealersum<=21){ //dealer has to stand      
                        cout<<"Dealer total is 17 or more. Hence dealer will have to stand"<<endl;
                        bjfile<<"Dealer total is 17 or more. Hence dealer will have to stand"<<endl;//writing log to file
                        dealerflag=false;
                    }
                    else if (dealersum==21 && !playerBJ) {
                        cout<<"Dealer got blackjack!. Your "<<BET<<" $ bet went to the dealer"<<endl;
                        bjfile<<"Dealer got blackjack!. Your "<<BET<<" $ bet went to the dealer"<<endl;//writing log to file
                        balance--;
                        cout<<"Your new balance is : $"<<balance<<endl;
                        cout<<"Your new balance is : $"<<balance<<endl;//writing to log file
                        dealerflag=false;
                        dealerBJ=true;
                    }

                    else {
                        cout<<"Dealer total is 16 or less. Hence dealer will have to hit"<<endl;  
                        bjfile<<"Dealer total is 16 or less. Hence dealer will have to hit"<<endl;  //writing log to file
                    }
                } while (dealerflag);

                /*if (dealersum>21) {
                    cout<<"Dealer bursted out... Hence you won the game"<<endl;
                    cout<<"Dealer paid you $"<<BET<<endl;
                    bjfile<<"Dealer bursted out... Hence you won the game"<<endl;//writing log to file
                    bjfile<<"Dealer paid you $"<<BET<<endl;//writing log to file
                    balance+=BET;
                    cout<<"Your new balance is : $"<<balance<<endl;
                    bjfile<<"Your new balance is : $"<<balance<<endl;//writing log to file
                }*/
                if ((dealerBJ && !playerBJ) || (!dealerBJ && playerBJ))
                    break;

                if (dealersum>sum){
                    cout<<"Dealer Won!. Your "<<BET<<" $ bet went to the dealer"<<endl;
                    bjfile<<"Dealer Won!. Your "<<BET<<" $ bet went to the dealer"<<endl;//writing log to file
                    balance--;
                    cout<<"Your new balance is : $"<<balance<<endl;
                    bjfile<<"Your new balance is : $"<<balance<<endl;//writing log to file
                }
                else if (sum>dealersum){
                    cout<<"You Won"<<endl;
                    cout<<"Dealer paid you $"<<BET<<endl;
                    bjfile<<"You Won"<<endl;//writing log to file
                    bjfile<<"Dealer paid you $"<<BET<<endl;//writing log to file
                    balance+=BET;
                    cout<<"Your new balance is : $"<<balance<<endl;
                    bjfile<<"Your new balance is : $"<<balance<<endl;//writing log to file
                }
                else{
                    cout<<"Your total is equal to that of builder's. Game draws. You get your bet back"<<endl<<endl;
                    bjfile<<"Your total is equal to that of builder's. Game draws. You get your bet back"<<endl<<endl;//writing log to file
                }
            } //end of if
        
        }//end of game loop
   
        cout<<"--------------------------------------"<<endl;
        cout<<"Do you want to quit playing? (yes(y)/No (n)"<<endl;
        cin>>response;
        if (response=='n' || response=='N'){
            cout<<"Thanks for playing Suhaani's blackjack"<<endl;
            cout<<"Your current balance is "<<balance<<" dollars"<<endl;
            cout<<"Return counters and take your money back"<<endl;
            cout<<"--------------------------------------------";
            gamemasterloop=false;
        }//end of if
    }// end of mastergameloop
    bjfile.close();
    
    
    //Exit stage right
    return 0;
}

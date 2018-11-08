/* 
 * File:   main.cpp
 * Author: Jrrobert Jabonillo
 * Created on November 3, 2018, 4:53 PM
 * Purpose: GOLF, the card game. Version 3
 *          
 *          
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins 
int main(int argc, char** argv) {
    //Seed random generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string name;
    char knock, swap;
    unsigned int player, card, replace;
    int deck, total1 = 0, total2 = 0, total3 = 0, total4 = 0;
    unsigned int nline, hold, deals, temp, carnum1, carnum2, carnum3, carnum4, carnum5, carnum6, carnum7, carnum8, carnum9, carnum10, carnum11, carnum12, carnum13, carnum14, carnum15, carnum16;
    //Initial Variable
    deck = 52;
    deals = 0;
    temp = 0;
    //Introduction to game
    cout<<fixed<<setw(4);
    cout<<"Welcome to the card game known as GOLF. There are 8 turns within a game."<<endl; 
    cout<<"The goal of the game is to end up with the least amount of points. The rules are that Jacks and Queens are valued at 10 points. Kings are worth 0 points. Ace is 1 point. 3-10 valued face value. A matching pair will result to 0 points. You can see two cards from your given hand and can swap out a card when drawing from the deck."<<endl;
    cout<<"A player can knock to end the game. Or the game will until 8 turns are reached."<<endl;
    cout<<"Have fun!"<<endl;
    cout<<"-----------------------------------------"<<endl;
    //Choose how many players
    cout<<"Choose the amount of players: ";
    cin>>player;
    while(player < 2 || player > 4){
        cout<<"Error! Must be between 2 to 4 players"<<endl;
        cin>>player;
    }
    //Chooses the amount of cards to draw depending on player count
    switch(player){
        case 2:{ //52 - 8 44 cards in drawing deck
                //deck1-- counts down from deck count
                //Player 1 goes first
                //carum1 - carnum4 = 1st player
                //Randomly chose card number for 1st card
                fstream value;
                value.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value>>carnum1;
                }
                value.close();
                //Randomly chose card number for 2nd card
                fstream car2;
                car2.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car2>>carnum2;
                }
                car2.close();
                //Randomly chose card number for 3rd card
                fstream car3;
                car3.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car3>>carnum3;
                }
                car3.close();
                //Randomly chose card number for 4th card
                fstream car4;
                car4.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car4>>carnum4;
                }
                car4.close();
                //Randomly chose card number for 5th card
                fstream car5;
                car5.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car5>>carnum5;
                }
                car5.close();
                //Randomly chose card number for 6th card
                fstream car6;
                car6.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car6>>carnum6;
                }
                car6.close();
                //Randomly chose card number for 7th card
                fstream car7;
                car7.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car7>>carnum7;
                }
                car7.close();
                //Randomly chose card number for 8th card
                fstream car8;
                car8.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car8>>carnum8;
                }
                car8.close();
                //Asks what two cards would like to see. 1st player is first. 
                cout<<"1st Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum1 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum1 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum1 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum1 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum1 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum1 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum1 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum1 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum1 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum1 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            //Randomly decides whether it is a jack, queen or face value card. As all equal to 10 points
                            if(carnum1 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum2 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum2 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum2 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum2 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum2 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum2 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum2 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum2 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum2 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum2 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum2 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum3 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum3 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum3 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum3 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum3 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum3 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum3 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum3 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum3 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum3 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum3 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum4 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum4 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum4 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum4 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum4 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum4 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum4 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum4 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum4 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum4 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum4 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"1st Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum1 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum1 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum1 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum1 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum1 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum1 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum1 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum1 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum1 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum1 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum1 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum2 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum2 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum2 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum2 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum2 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum2 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum2 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum2 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum2 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum2 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum2 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum3 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum3 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum3 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum3 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum3 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum3 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum3 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum3 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum3 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum3 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum3 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum4 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum4 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum4 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum4 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum4 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum4 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum4 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum4 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum4 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum4 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum4 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"2nd Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum5 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum5 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum5 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum5 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum5 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum5 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum5 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum5 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum5 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum5 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum5 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum6 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum6 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum6 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum6 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum6 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum6 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum6 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum6 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum6 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum6 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum6 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum7 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum7 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum7 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum7 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum7 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum7 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum7 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum7 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum7 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum7 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum7 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum8 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum8 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum8 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum8 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum8 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum8 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum8 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum8 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum8 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum8 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum8 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"2nd Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum5 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum5 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum5 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum5 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum5 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum5 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum5 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum5 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum5 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum5 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum5 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum6 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum6 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum6 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum6 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum6 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum6 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum6 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum6 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum6 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum6 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum6 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum7 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum7 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum7 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum7 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum7 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum7 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum7 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum7 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum7 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum7 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum7 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum8 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum8 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum8 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum8 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum8 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum8 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum8 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum8 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum8 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum8 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum8 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<endl;
                while( deals != 9){
                    cout<<"1st Player draw from deck"<<endl;
                    deck = 44;
                    //1st player draws from deck
                    fstream draw;
                    draw.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw>>hold;
                    }
                    deck = deck - 1;
                    deals = deals + 1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                                
                                
                    }
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            //Swaps out the original card value with new drawn card value
                            switch(replace){
                                case 1: hold = temp;
                                        carnum1 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum2 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum3 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum4 = temp;
                                        break;
                                        
                            }
                        }
                    cout<<"Do you want to knock? y/n: ";
                    cin>>knock;
                    if(knock == 'y' ){
                        deals = 9;
                    }
                    cout<<"2nd Player draw from deck"<<endl;    
                    //2nd player draws from deck
                    fstream draw1;
                    draw1.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw1>>hold;
                    }
                    deck = deck - 1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                                
                                
                    }
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            switch(replace){
                                case 1: hold = temp;
                                        carnum5 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum6 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum7 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum8 = temp;
                                        break;
                                        
                            }
                        }
                        cout<<"Do you want to knock? y/n: ";
                        cin>>knock;
                        if(knock == 'y' ){
                            deals = 9;
                        }
                }
                total1 = carnum1 + carnum2 + carnum3 + carnum4;
                total2 = carnum5 + carnum6 + carnum7 + carnum8;
                //display the players hands
                cout<<fixed<<setw(2);
                cout<<endl;
                cout<<"There were "<<deck<<" cards left in the deck."<<endl;
                cout<<endl;
                cout<<"Player one hand: "<<endl;
                if(carnum1 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum1 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum1 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum1 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum1 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum1 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum1 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum1 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum1 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum1 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum1 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum2 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum2 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum2 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum2 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum2 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum2 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum2 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum2 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum2 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum2 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum2 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum3 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum3 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum3 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum3 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum3 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum3 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum3 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum3 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum3 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum3 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum3 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                if(carnum4 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum4 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum4 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum4 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum4 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum4 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum4 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum4 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum4 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum4 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum4 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                cout<<endl;
                cout<<"Player two hand: "<<endl;
                if(carnum5 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum5 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum5 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum5 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum5 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum5 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum5 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum5 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum5 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum5 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum5 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum6 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum6 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum6 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum6 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum6 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum6 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum6 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum6 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum6 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum6 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum6 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum7 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum7 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum7 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum7 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum7 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum7 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum7 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum7 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum7 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum7 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum7 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum8 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum8 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum8 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum8 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum8 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum8 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum8 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum8 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum8 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum8 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum8 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                if(total1 < total2){
                    fstream result;
                    result.open("result.dat");
                    result<<"Player one is the winner with "<<total1<<endl;
                    result.close();
                }
                else{
                    fstream result;
                    result.open("result.dat");
                    result<<"Player two is the winner with "<<total2<<endl;
                    result.close();
                }
        }
        break;        
                //There are three players in this case.
   case 3:{     fstream value1;
                value1.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value1>>carnum1;
                }
                value1.close();
                //Randomly chose card number for 2nd card
                fstream value3;
                value3.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value3>>carnum2;
                }
                value3.close();
                //Randomly chose card number for 3rd card
                fstream value4;
                value4.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value4>>carnum3;
                }
                value4.close();
                //Randomly chose card number for 4th card
                fstream value5;
                value5.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value5>>carnum4;
                }
                value5.close();
                //Randomly chose card number for 5th card
                fstream value6;
                value6.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value6>>carnum5;
                }
                value6.close();
                //Randomly chose card number for 6th card
                fstream value7;
                value7.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value7>>carnum6;
                }
                value7.close();
                //Randomly chose card number for 7th card
                fstream value8;
                value8.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value8>>carnum7;
                }
                value8.close();
                //Randomly chose card number for 8th card
                fstream car9;
                car9.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car9>>carnum8;
                }
                car9.close();
                //Randomly chose card number for 9th card
                fstream value9;
                value9.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value9>>carnum9;
                }
                value9.close();
                //Randomly chose card number for 10th card
                fstream value10;
                value10.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value10>>carnum10;
                }
                value10.close();
                //Randomly chose card number for 11th card
                fstream value11;
                value11.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value11>>carnum11;
                }
                value11.close();
                //Randomly chose card number for 12th card
                fstream car12;
                car12.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car12>>carnum12;
                }
                car12.close();
                //Asks what two cards would like to see. 1st player is first. 
                cout<<"1st Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum1 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum1 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum1 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum1 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum1 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum1 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum1 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum1 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum1 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum1 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            //Randomly decides whether it is a jack, queen or face value card. As all equal to 10 points
                            if(carnum1 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum2 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum2 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum2 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum2 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum2 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum2 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum2 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum2 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum2 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum2 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum2 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum3 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum3 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum3 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum3 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum3 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum3 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum3 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum3 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum3 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum3 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum3 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum4 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum4 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum4 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum4 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum4 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum4 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum4 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum4 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum4 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum4 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum4 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"1st Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum1 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum1 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum1 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum1 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum1 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum1 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum1 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum1 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum1 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum1 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum1 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum2 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum2 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum2 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum2 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum2 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum2 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum2 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum2 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum2 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum2 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum2 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum3 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum3 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum3 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum3 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum3 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum3 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum3 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum3 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum3 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum3 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum3 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum4 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum4 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum4 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum4 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum4 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum4 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum4 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum4 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum4 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum4 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum4 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"2nd Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum5 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum5 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum5 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum5 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum5 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum5 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum5 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum5 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum5 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum5 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum5 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum6 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum6 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum6 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum6 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum6 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum6 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum6 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum6 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum6 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum6 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum6 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum7 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum7 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum7 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum7 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum7 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum7 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum7 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum7 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum7 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum7 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum7 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum8 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum8 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum8 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum8 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum8 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum8 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum8 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum8 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum8 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum8 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum8 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"2nd Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum5 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum5 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum5 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum5 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum5 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum5 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum5 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum5 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum5 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum5 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum5 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum6 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum6 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum6 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum6 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum6 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum6 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum6 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum6 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum6 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum6 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum6 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum7 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum7 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum7 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum7 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum7 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum7 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum7 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum7 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum7 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum7 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum7 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum8 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum8 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum8 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum8 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum8 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum8 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum8 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum8 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum8 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum8 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum8 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"3rd Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum9 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum9 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum9 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum9 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum9 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum9 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum9 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum9 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum9 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum9 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum9 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum10 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum10 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum10 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum10 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum10 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum10 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum10 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum10 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum10 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum10 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum10 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum11 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum11 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum11 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum11 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum11 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum11 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum11 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum11 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum11 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum11 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum11 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum12 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum12 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum12 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum12 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum12 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum12 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum12 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum12 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum12 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum12 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum12 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"3rd Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum9 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum9 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum9 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum9 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum9 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum9 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum9 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum9 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum9 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum9 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum9 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum10 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum10 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum10 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum10 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum10 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum10 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum10 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum10 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum10 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum10 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum10 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum11 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum11 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum11 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum11 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum11 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum11 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum11 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum11 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum11 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum11 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum11 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum12 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum12 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum12 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum12 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum12 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum12 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum12 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum12 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum12 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum12 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum12 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<endl;
                while(deals != 9){
                    cout<<"1st Player draw from deck"<<endl;
                    deck = 40;
                    //1st player draws from deck
                    fstream draw;
                    draw.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw>>hold;
                    }
                    deck = deck -1;
                    deals = deals + 1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                                
                                
                    }
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            //Swaps out the original card value with new drawn card value
                            switch(replace){
                                case 1: hold = temp;
                                        carnum1 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum2 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum3 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum4 = temp;
                                        break;
                                        
                            }
                        }
                    cout<<"Do you want to knock? y/n: ";
                    cin>>knock;
                    if(knock == 'y' ){
                        deals = 9;
                    }
                    cout<<endl;
                    cout<<"2nd Player draw from deck"<<endl;    
                    //2nd player draws from deck
                    fstream draw1;
                    draw1.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw1>>hold;
                    }
                    deck = deck -1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                                
                                
                    }
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            switch(replace){
                                case 1: hold = temp;
                                        carnum5 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum6 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum7 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum8 = temp;
                                        break;
                                        
                            }
                        }
                        cout<<"Do you want to knock? y/n: ";
                        cin>>knock;
                        if(knock == 'y' ){
                            deals = 9;
                        }
                    cout<<endl;
                    cout<<"3rd Player draw from deck"<<endl;    
                    //3rd player draws from deck
                    fstream draw2;
                    draw2.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw2>>hold;
                    }
                    deck = deck -1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                                
                                
                    }
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            switch(replace){
                                case 1: hold = temp;
                                        carnum9 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum10 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum11 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum12 = temp;
                                        break;
                                        
                            }
                        }
                        cout<<"Do you want to knock? y/n: ";
                        cin>>knock;
                        if(knock == 'y' ){
                            deals = 9;
                        }
                }        
                
                total1 = carnum1 + carnum2 + carnum3 + carnum4;
                total2 = carnum5 + carnum6 + carnum7 + carnum8;
                total3 = carnum9 + carnum10 + carnum11 + carnum12;
                //display the players hands
                cout<<fixed<<setw(2);
                cout<<endl;
                cout<<"There were "<<deck<<" cards left in the deck."<<endl;
                cout<<endl;
                cout<<"Player one hand: "<<endl;
                if(carnum1 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum1 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum1 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum1 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum1 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum1 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum1 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum1 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum1 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum1 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum1 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum2 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum2 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum2 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum2 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum2 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum2 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum2 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum2 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum2 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum2 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum2 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum3 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum3 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum3 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum3 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum3 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum3 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum3 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum3 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum3 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum3 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum3 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                if(carnum4 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum4 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum4 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum4 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum4 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum4 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum4 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum4 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum4 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum4 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum4 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                cout<<endl;
                cout<<"Player two hand: "<<endl;
                if(carnum5 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum5 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum5 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum5 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum5 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum5 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum5 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum5 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum5 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum5 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum5 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum6 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum6 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum6 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum6 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum6 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum6 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum6 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum6 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum6 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum6 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum6 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum7 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum7 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum7 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum7 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum7 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum7 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum7 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum7 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum7 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum7 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum7 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum8 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum8 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum8 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum8 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum8 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum8 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum8 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum8 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum8 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum8 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum8 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                cout<<endl;
                cout<<"Player three hand: "<<endl;
                if(carnum9 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum9 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum9 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum9 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum9 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum9 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum9 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum9 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum9 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum9 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum9 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum10 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum10 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum10 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum10 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum10 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum10 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum10 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum10 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum10 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum10 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum10 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum11 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum11 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum11 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum11 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum11 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum11 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum11 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum11 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum11 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum11 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum11 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum12 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum12 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum12 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum12 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum12 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum12 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum12 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum12 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum12 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum12 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum12 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                if(total1 < total2){
                    fstream result;
                    result.open("result.dat");
                    result<<"Player one is the winner with "<<total1<<endl;
                    result.close();
                }
                else if(total2 < total1){
                    fstream result;
                    result.open("result.dat");
                    result<<"Player two is the winner with "<<total2<<endl;
                    result.close();
                }
                else if(total3 < total1 && total3 < total2){
                    fstream result;
                    result.open("result.dat");
                    result<<"Player three is the winner with "<<total3<<endl;
                    result.close();
                }
                
   }
   break;
              //Player amount is 4
        case 4:{fstream value1;
                value1.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value1>>carnum1;
                }
                value1.close();
                //Randomly chose card number for 2nd card
                fstream value3;
                value3.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value3>>carnum2;
                }
                value3.close();
                //Randomly chose card number for 3rd card
                fstream value4;
                value4.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value4>>carnum3;
                }
                value4.close();
                //Randomly chose card number for 4th card
                fstream value5;
                value5.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value5>>carnum4;
                }
                value5.close();
                //Randomly chose card number for 5th card
                fstream value6;
                value6.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value6>>carnum5;
                }
                value6.close();
                //Randomly chose card number for 6th card
                fstream value7;
                value7.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value7>>carnum6;
                }
                value7.close();
                //Randomly chose card number for 7th card
                fstream value8;
                value8.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value8>>carnum7;
                }
                value8.close();
                //Randomly chose card number for 8th card
                fstream car9;
                car9.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car9>>carnum8;
                }
                car9.close();
                //Randomly chose card number for 9th card
                fstream value9;
                value9.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value9>>carnum9;
                }
                value9.close();
                //Randomly chose card number for 10th card
                fstream value10;
                value10.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value10>>carnum10;
                }
                value10.close();
                //Randomly chose card number for 11th card
                fstream value11;
                value11.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    value11>>carnum11;
                }
                value11.close();
                //Randomly chose card number for 12th card
                fstream car12;
                car12.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car12>>carnum12;
                }
                car12.close();
                //Randomly chose card number for 12th card
                fstream car13;
                car13.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car13>>carnum13;
                }
                car13.close();
                //Randomly chose card number for 12th card
                fstream car14;
                car14.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car14>>carnum14;
                }
                car14.close();
                                //Randomly chose card number for 12th card
                fstream car15;
                car15.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car15>>carnum15;
                }
                car15.close();
                                //Randomly chose card number for 12th card
                fstream car16;
                car16.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car16>>carnum16;
                }
                car16.close();
                //Asks what two cards would like to see. 1st player is first. 
                cout<<"1st Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum1 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum1 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum1 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum1 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum1 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum1 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum1 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum1 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum1 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum1 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            //Randomly decides whether it is a jack, queen or face value card. As all equal to 10 points
                            if(carnum1 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum2 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum2 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum2 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum2 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum2 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum2 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum2 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum2 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum2 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum2 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum2 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum3 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum3 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum3 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum3 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum3 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum3 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum3 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum3 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum3 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum3 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum3 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum4 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum4 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum4 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum4 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum4 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum4 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum4 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum4 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum4 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum4 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum4 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"1st Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum1 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum1 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum1 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum1 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum1 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum1 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum1 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum1 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum1 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum1 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum1 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum2 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum2 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum2 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum2 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum2 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum2 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum2 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum2 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum2 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum2 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum2 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum3 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum3 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum3 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum3 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum3 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum3 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum3 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum3 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum3 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum3 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum3 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum4 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum4 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum4 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum4 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum4 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum4 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum4 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum4 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum4 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum4 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum4 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"2nd Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum5 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum5 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum5 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum5 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum5 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum5 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum5 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum5 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum5 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum5 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum5 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum6 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum6 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum6 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum6 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum6 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum6 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum6 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum6 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum6 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum6 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum6 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum7 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum7 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum7 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum7 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum7 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum7 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum7 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum7 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum7 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum7 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum7 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum8 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum8 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum8 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum8 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum8 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum8 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum8 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum8 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum8 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum8 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum8 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"2nd Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum5 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum5 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum5 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum5 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum5 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum5 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum5 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum5 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum5 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum5 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum5 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum6 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum6 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum6 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum6 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum6 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum6 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum6 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum6 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum6 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum6 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum6 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum7 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum7 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum7 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum7 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum7 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum7 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum7 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum7 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum7 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum7 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum7 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum8 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum8 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum8 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum8 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum8 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum8 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum8 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum8 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum8 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum8 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum8 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"3rd Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum9 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum9 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum9 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum9 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum9 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum9 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum9 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum9 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum9 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum9 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum9 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum10 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum10 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum10 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum10 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum10 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum10 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum10 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum10 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum10 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum10 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum10 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum11 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum11 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum11 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum11 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum11 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum11 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum11 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum11 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum11 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum11 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum11 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum12 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum12 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum12 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum12 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum12 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum12 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum12 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum12 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum12 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum12 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum12 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"3rd Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum9 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum9 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum9 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum9 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum9 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum9 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum9 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum9 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum9 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum9 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum9 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum10 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum10 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum10 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum10 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum10 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum10 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum10 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum10 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum10 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum10 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum10 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum11 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum11 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum11 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum11 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum11 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum11 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum11 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum11 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum11 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum11 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum11 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum12 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum12 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum12 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum12 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum12 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum12 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum12 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum12 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum12 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum12 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum12 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"4th Player. Choose card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum13 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum13 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum13 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum13 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum13 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum13 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum13 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum13 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum13 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum13 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum13 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum14 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum14 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum14 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum14 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum14 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum14 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum14 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum14 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum14 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum14 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum14 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum15 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum15 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum15 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum15 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum15 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum15 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum15 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum15 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum15 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum15 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum15 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum16 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum16 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum16 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum16 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum16 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum16 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum16 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum16 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum16 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum16 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum16 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                cout<<"4th Player. Choose second card 1-4 to see. ";
                cin>>card;
                while(card < 1 || card > 4){
                    cout<<"Error! choose a card 1-4 ";
                    cin>>card;
                }
                switch(card){
                    case 1: if(carnum13 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum13 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum13 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum13 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum13 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum13 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum13 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum13 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum13 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum13 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum13 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 2: if(carnum14 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum14 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum14 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum14 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum14 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum14 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum14 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum14 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum14 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum14 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum14 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 3: if(carnum15 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum15 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum15 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum15 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum15 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum15 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum15 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum15 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum15 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum15 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum15 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    case 4: if(carnum16 == 0 ){
                                cout<<"Card is a king"<<endl;
                            }
                            else if(carnum16 == 1){
                                cout<<"Card is an ace"<<endl;
                            }
                            else if(carnum16 == 2){
                                cout<<"Card value is 2"<<endl;
                            }
                            else if(carnum16 == 3){
                                cout<<"Card value is 3"<<endl;
                            }
                            else if(carnum16 == 4){
                                cout<<"Card value is 4"<<endl;
                            }
                            else if(carnum16 == 5){
                                cout<<"Card value is 5"<<endl;
                            }
                            else if(carnum16 == 6){
                                cout<<"Card value is 6"<<endl;
                            }
                            else if(carnum16 == 7){
                                cout<<"Card value is 7"<<endl;
                            }
                            else if(carnum16 == 8){
                                cout<<"Card value is 8"<<endl;
                            }
                            else if(carnum16 == 9){
                                cout<<"Card value is 9"<<endl;
                            }
                            if(carnum16 == 10){
                                fstream ten;
                                ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                            }
                            break;
                    
                }
                
                //Players will now draw cards from deck
                cout<<endl;
                while(deals != 9){
                    cout<<"1st Player draw from deck"<<endl;
                    deck = 44;
                    //1st player draws from deck
                    fstream draw;
                    draw.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw>>hold;
                    }
                    deck = deck -1;
                    deals = deals + 1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                                
                                
                    }
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            //Swaps out the original card value with new drawn card value
                            switch(replace){
                                case 1: hold = temp;
                                        carnum1 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum2 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum3 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum4 = temp;
                                        break;
                                        
                            }
                        }
                    cout<<"Do you want to knock? y/n: ";
                    cin>>knock;
                    if(knock == 'y' ){
                        deals = 9;
                    }
                    cout<<endl;
                    cout<<"2nd Player draw from deck"<<endl;    
                    //2nd player draws from deck
                    fstream draw1;
                    draw1.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw1>>hold;
                    }
                    deck = deck -1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                                
                                
                    }
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            switch(replace){
                                case 1: hold = temp;
                                        carnum5 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum6 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum7 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum8 = temp;
                                        break;
                                        
                            }
                        }
                        cout<<"Do you want to knock? y/n: ";
                        cin>>knock;
                        if(knock == 'y' ){
                            deals = 9;
                        }
                    cout<<endl;
                    cout<<"3rd Player draw from deck"<<endl;    
                    //3rd player draws from deck
                    fstream draw2;
                    draw2.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw2>>hold;
                    }
                    deck = deck -1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                    }
                                
                                
                    
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            switch(replace){
                                case 1: hold = temp;
                                        carnum9 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum10 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum11 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum12 = temp;
                                        break;
                                        
                            }
                        }
                        cout<<"Do you want to knock? y/n: ";
                        cin>>knock;
                        if(knock == 'y' ){
                            deals = 9;
                        }
                    cout<<endl;    
                    cout<<"4th Player draw from deck"<<endl;    
                    //4th player draws from deck
                    fstream draw3;
                    draw3.open("value.dat");
                    nline = rand()%12+1;
                    for(int line = 0; line <= nline; line++){
                        draw3>>hold;
                    }
                    deck = deck -1;
                    switch(hold){
                        case 0: cout<<"Card is a king"<<endl;
                                break;
                        case 1: cout<<"Card is an ace"<<endl;
                                break;
                        case 2: cout<<"Card value is 2"<<endl;
                                break;
                        case 3: cout<<"Card value is 3"<<endl;
                                break;
                        case 4: cout<<"Card value is 4"<<endl;
                                break;
                        case 5: cout<<"Card value is 5"<<endl;
                                break;
                        case 6: cout<<"Card value is 6"<<endl;
                                break;
                        case 7: cout<<"Card value is 7"<<endl;
                                break;
                        case 8: cout<<"Card value is 8"<<endl;
                                break;
                        case 9: cout<<"Card value is 9"<<endl;
                                break;
                        case 10: fstream ten;
                                 ten.open("ten.dat");
                                nline = rand()%4+1;
                                for(int line = 0; line <= nline; line++){
                                    ten>>name;
                                }
                                if(name == "jack"){
                                    cout<<"Card is a jack"<<endl; 
                                }
                                if(name == "queen"){
                                    cout<<"Card is a queen"<<endl;
                                }
                                if(name == "face"){
                                    cout<<"Card value is 10"<<endl;
                                }
                                ten.close();
                                break;
                                
                                
                    }
                    cout<<"Do you want to swap a card? y/n: ";
                        cin>>swap;
                        if(swap == 'y'){
                            cout<<"Choose the card to swap: ";
                            cin>>replace;
                            while(replace < 1 || replace > 4){
                                cout<<"Error! Choose a card 1-4";
                                cin>>replace;
                            }
                            switch(replace){
                                case 1: hold = temp;
                                        carnum13 = temp;
                                        break;
                                case 2: hold = temp;
                                        carnum14 = temp;
                                        break;
                                case 3: hold = temp;
                                        carnum15 = temp;
                                        break;
                                case 4: hold = temp;
                                        carnum16 = temp;
                                        break;
                                        
                            }
                        }
                        cout<<"Do you want to knock? y/n: ";
                        cin>>knock;
                        if(knock == 'y' ){
                            deals = 9;
                        }
                }
                total1 = carnum1 + carnum2 + carnum3 + carnum4;
                total2 = carnum5 + carnum6 + carnum7 + carnum8;
                total3 = carnum9 + carnum10 + carnum11 + carnum12;
                total4 = carnum13 + carnum14 + carnum15 + carnum16;
                //display the players hands
                cout<<fixed<<setw(2);
                cout<<endl;
                cout<<"There were "<<deck<<" cards left in the deck."<<endl;
                cout<<endl;
                cout<<"Player one hand: "<<endl;
                if(carnum1 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum1 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum1 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum1 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum1 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum1 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum1 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum1 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum1 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum1 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum1 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum2 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum2 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum2 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum2 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum2 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum2 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum2 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum2 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum2 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum2 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum2 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum3 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum3 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum3 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum3 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum3 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum3 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum3 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum3 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum3 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum3 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum3 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                if(carnum4 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum4 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum4 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum4 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum4 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum4 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum4 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum4 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum4 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum4 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum4 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                cout<<endl;
                cout<<"Player two hand: "<<endl;
                if(carnum5 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum5 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum5 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum5 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum5 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum5 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum5 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum5 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum5 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum5 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum5 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum6 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum6 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum6 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum6 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum6 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum6 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum6 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum6 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum6 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum6 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum6 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum7 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum7 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum7 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum7 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum7 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum7 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum7 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum7 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum7 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum7 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum7 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum8 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum8 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum8 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum8 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum8 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum8 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum8 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum8 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum8 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum8 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum8 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                cout<<endl;
                
                cout<<"Player three hand: "<<endl;
                if(carnum9 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum9 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum9 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum9 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum9 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum9 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum9 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum9 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum9 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum9 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum9 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum10 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum10 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum10 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum10 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum10 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum10 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum10 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum10 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum10 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum10 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum10 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum11 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum11 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum11 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum11 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum11 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum11 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum11 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum11 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum11 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum11 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum11 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum12 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum12 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum12 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum12 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum12 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum12 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum12 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum12 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum12 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum12 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum12 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                cout<<endl;
                cout<<"Player four hand: "<<endl;
                if(carnum13 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum13 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum13 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum13 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum13 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum13 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum13 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum13 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum13 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum13 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum13 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum14 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum14 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum14 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum14 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum14 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum14 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum14 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum14 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum14 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum14 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum14 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum15 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum15 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum15 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum15 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum15 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum15 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum15 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum15 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum15 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum15 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum15 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                
                if(carnum16 == 0){
                    cout<<"king"<<endl;
                }
                if(carnum16 == 1){
                    cout<<"Ace"<<endl;
                }
                if(carnum16 == 2){
                    cout<<"2 card"<<endl;
                }
                if(carnum16 == 3){
                    cout<<"3 card"<<endl;
                }
                if(carnum16 == 4){
                    cout<<"4 card"<<endl;
                }
                if(carnum16 == 5){
                    cout<<"5 card"<<endl;
                }
                if(carnum16 == 6){
                    cout<<"6 card"<<endl;
                }
                if(carnum16 == 7){
                    cout<<"7 card"<<endl;
                }
                if(carnum16 == 8){
                    cout<<"8 card"<<endl;
                }
                if(carnum16 == 9){
                    cout<<"9 card"<<endl;
                }
                else if(carnum16 == 10){
                    fstream ten;
                    ten.open("ten.dat");
                    nline = rand()%4+1;
                    for(int line = 0; line <= nline; line++){
                        ten>>name;
                    }
                    if(name == "jack"){
                        cout<<"Card is a jack"<<endl; 
                    }
                    if(name == "queen"){
                        cout<<"Card is a queen"<<endl;
                    }
                    if(name == "face"){
                        cout<<"Card value is 10"<<endl;
                    }
                    ten.close();
                            
                }
                
                if(total1 < total2){
                    fstream result;
                    result.open("result.dat");
                    result<<"Player one is the winner with "<<total1<<endl;
                    result.close();
                }
                else if(total2 < total1){
                    fstream result;
                    result.open("result.dat");
                    result<<"Player two is the winner with "<<total2<<endl;
                    result.close();
                }
                else if(total3 < total1 && total3 < total2){
                    fstream result;
                    result.open("result.dat");
                    result<<"Player three is the winner with "<<total3<<endl;
                    result.close();
                }
                else if(total4 < total1 && total4 < total2 && total4 < total3){
                    fstream result;
                    result.open("result.dat");
                    result<<"Player four is the winner with "<<total4<<endl;
                    result.close();
                }
        } 
             

        
    }
   
    //Exit program!
    return 0;
}


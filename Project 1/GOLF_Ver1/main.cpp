/* 
 * File:   main.cpp
 * Author: Jrrobert Jabonillo
 * Created on November 3, 2018, 4:53 PM
 * Purpose: GOLF, the card game.
 *          
 *          
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
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
    unsigned int card1, card2, card3, card4, player, card;
    int deck, total1, total2, total3, total4;
    unsigned int nline, hold, deals, carnum1, carnum2, carnum3, carnum4, carnum5, carnum6, carnum7, carnum8, carnum9, carnum10, carnum11, carnum12, carnum13, carnum14, carnum15, carnum16;
    //Initial Variable
    deck = 52;
    //Choose how many players
    cout<<"Choose the amount of players: ";
    cin>>player;
    while(player < 2 || player > 4){
        cout<<"Error! Must be between 2 to 4 players"<<endl;
        cin>>player;
    }
    //Chooses the amount of cards to draw depending on player count
    switch(player){
        case 2: //52 - 8 44 cards in drawing deck
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
                for(int i = 0; i <= 0; i++){
                    cout<<carnum1<<endl;
                }
                value.close();
                //Randomly chose card number for 2nd card
                fstream car2;
                car2.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car2>>carnum2;
                }
                for(int i = 0; i <= 0; i++){
                    cout<<carnum2<<endl;
                }
                car2.close();
                //Randomly chose card number for 3rd card
                fstream car3;
                car3.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car3>>carnum3;
                }
                for(int i = 0; i <= 0; i++){
                    cout<<carnum3<<endl;
                }
                car3.close();
                //Randomly chose card number for 4th card
                fstream car4;
                car4.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car4>>carnum4;
                }
                for(int i = 0; i <= 0; i++){
                    cout<<carnum4<<endl;
                }
                car4.close();
                //Randomly chose card number for 5th card
                fstream car5;
                car5.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car5>>carnum5;
                }
                for(int i = 0; i <= 0; i++){
                    cout<<carnum5<<endl;
                }
                car5.close();
                //Randomly chose card number for 6th card
                fstream car6;
                car6.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car6>>carnum6;
                }
                for(int i = 0; i <= 0; i++){
                    cout<<carnum6<<endl;
                }
                car6.close();
                //Randomly chose card number for 7th card
                fstream car7;
                car7.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car7>>carnum7;
                }
                for(int i = 0; i <= 0; i++){
                    cout<<carnum7<<endl;
                }
                car7.close();
                //Randomly chose card number for 8th card
                fstream car8;
                car8.open("value.dat");
                nline = rand()%12+1;
                for(int line = 0; line <= nline; line++){
                    car8>>carnum8;
                }
                for(int i = 0; i <= 0; i++){
                    cout<<carnum8<<endl;
                }
                car8.close();
                
                //Asks what two cards would like to see. 1st player is first
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
            
    }
    
    //Part where card value is randomly given to play

    
    //Display Outputs
   
    //Exit program!
    return 0;
}


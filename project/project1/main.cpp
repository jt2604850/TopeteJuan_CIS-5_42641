/* 
 * File:   main.cpp
 * Author: Juan Topete
 * Created on April 10, 2017, 10:59 AM
 * Purpose: Play a game of Hang-man with customizable setting and categories.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>  //Strings
#include <cstdlib> //standard libary
#include<ctime> //time given for round
using namespace std; //Name-space under which system libraries exist

//User Libraries - None

//Global Constants -None

//Function Prototypes - None

//Execution begins here
int main(){
    
//Declare variables 
char lvl,answer,answer1,answer2,answer3; //Skill level, players answers
char choice,beginner,novice,expert,pro; //Player rank

//Input
do {
cout<< "Welcome contestant to the game of Hang-man. First we'll begin with\n "
        "some questions to determine skill level."<<endl;
cout<<"Fill in the blank\n"
        "So far so ____.  "<<endl;
cin>>answer;
//Input to output

if (answer = 'good') 
{
    cout<<"Guess the repeating word\n"; 
            "The only thing we need to ____ is ____ itself.";  
}
else lvl=beginner;
if (answer = 'fear') 
{
    cout<<"Guess the following sequence\n"; 
           "When in doubt, give me a _____.\n";
           "Let me hear you _____.";        
}
else lvl=novice;
if (answer= 'shout') 
{
    cout<<"Complete the following\n";
           "H_st_";
}
else lvl=expert;
if (answer = 'Haste') 
{
    lvl=pro;
    cout<<"Congrats you have reached pro level stay sharp to solve this puzzle"; 
}

switch(choice){ 
//Puzzles for beginner level
case 'beginner' :{


    break;}

}
}while (lvl=beginner,novice,expert,pro);

return 0;    
}     
 
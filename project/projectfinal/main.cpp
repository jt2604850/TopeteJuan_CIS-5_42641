/* 
 * File:   main.cpp
 * Author: Juan Topete
 * Created on April 16, 2017, 9:09 AM
 * Purpose: Play a game of Hang-man with customizable setting and categories.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>  //Strings
using namespace std; //Name-space under which system libraries exist

//User Libraries - None

//Global Constants -None

//Function Prototypes - None

//Execution begins here
int main(){
    
//Declare variables 
char choice; //Player rank

//Input
do {
cout<< "Welcome contestant to the game of Hang-man. \n "
        "what level do you want to play at beginner(type 1), novice(type 2),\n"
        "expert(type 3), pro(type 4)."<<endl;
cin>>choice;
//Input to output

switch(choice){ 
//Puzzles for beginner level
case '1' :{

{
  cout << "Welcome to Hang-man. The category is Countries of the World" << endl;
  
  string word;
  word ="the african plains"; //Answer to the puzzle
  
  string copy = word;

  string Underscore;
  
  for(int i=0; i!=word.length(); i++){

    if(word.at(i) == ' '){
      Underscore += " ";
    } else{
      Underscore += "_";
    }
  }
  
  for(int i=0; i!=50; ++i){
    cout << endl;
  }
  
  string guess;
  int wrong=0;
  
  while(1){
    if(wrong == 6){
      cout << "You have lost, answer: " << word << endl;
      break;
    }

    cout << Underscore << endl;
    cout << "There are " << word.length() << " letters with spaces" << endl;
    cout << "You have " << 6 - wrong << " more tries left" << endl;

    if(Underscore == word){
      cout << "You win! Try a higher difficulty." << endl;
      break;
    }

    cout << "Guess a letter or a word" << endl;
    cin >> guess; 
     
    if(guess.length() > 1){ 
      if(guess == word){ 
        cout << "That's right, you win!" << endl;
        break;
      } else{
        cout << "wrong word " << endl;
        wrong++;
      }
    } else if(copy.find(guess) != -1){
        while(copy.find(guess) != -1){
          Underscore.replace(copy.find(guess), 1, guess); 
          copy.replace(copy.find(guess), 1, "_");
        }
    } else{
      cout << "That's wrong" << endl;
      wrong++;
    }
    
    cout << endl;
  }
  return 0;
}
 break;}
//Puzzles for the novice level
    case '2' :{
{
   {
  cout << "Welcome to Hang-man. The category is Weather" << endl;
  
  string word;
  word ="typhoon blast of wind "; //Answer to the puzzle
  
  string copy = word;

  string Underscore;
  
  for(int i=0; i!=word.length(); i++){

    if(word.at(i) == ' '){
      Underscore += " ";
    } else{
      Underscore += "_";
    }
  }
  
  for(int i=0; i!=50; ++i){
    cout << endl;
  }
  
  string guess;
  int wrong=0;
  
  while(1){
    if(wrong == 6){
      cout << "You have lost, answer: " << word << endl;
      break;
    }

    cout << Underscore << endl;
    cout << "There are " << word.length() << " letters with spaces" << endl;
    cout << "You have " << 6 - wrong << " more tries left" << endl;

    if(Underscore == word){
      cout << "You win! Try a higher difficulty." << endl;
      break;
    }

    cout << "Guess a letter or a word" << endl;
    cin >> guess; 
     
    if(guess.length() > 1){ 
      if(guess == word){ 
        cout << "That's right, you win!" << endl;
        break;
      } else{
        cout << "wrong word " << endl;
        wrong++;
      }
    } else if(copy.find(guess) != -1){
        while(copy.find(guess) != -1){
          Underscore.replace(copy.find(guess), 1, guess); 
          copy.replace(copy.find(guess), 1, "_");
        }
    } else{
      cout << "That's wrong" << endl;
      wrong++;
    }
    
    cout << endl;
  }
  return 0;
}       
}
 break;}
//Puzzles for the expert level
    case '3' :{
{
   {
  cout << "Welcome to Hang-man. The category is Famous Explorers" << endl;
  
  string word;
  word ="marco polo goes to china"; //Answer to the puzzle
  
  string copy = word;

  string Underscore;
  
  for(int i=0; i!=word.length(); i++){

    if(word.at(i) == ' '){
      Underscore += " ";
    } else{
      Underscore += "_";
    }
  }
  
  for(int i=0; i!=50; ++i){
    cout << endl;
  }
  
  string guess;
  int wrong=0;
  
  while(1){
    if(wrong == 6){
      cout << "You have lost, answer: " << word << endl;
      break;
    }

    cout << Underscore << endl;
    cout << "There are " << word.length() << " letters with spaces" << endl;
    cout << "You have " << 6 - wrong << " more tries left" << endl;

    if(Underscore == word){
      cout << "You win! Try a higher difficulty." << endl;
      break;
    }

    cout << "Guess a letter or a word" << endl;
    cin >> guess; 
     
    if(guess.length() > 1){ 
      if(guess == word){ 
        cout << "That's right, you win!" << endl;
        break;
      } else{
        cout << "wrong word " << endl;
        wrong++;
      }
    } else if(copy.find(guess) != -1){
        while(copy.find(guess) != -1){
          Underscore.replace(copy.find(guess), 1, guess); 
          copy.replace(copy.find(guess), 1, "_");
        }
    } else{
      cout << "That's wrong" << endl;
      wrong++;
    }
    
    cout << endl;
  }
  return 0;
}
}
break;}
//Puzzles for the pro level
    case '4':{ 
{
{
  cout << "Welcome to Hang-man. The category is What's Cooking" << endl;
  
  string word;
  word ="spicy curry and rice"; //Answer to the puzzle
  
  string copy = word;

  string Underscore;
  
  for(int i=0; i!=word.length(); i++){

    if(word.at(i) == ' '){
      Underscore += " ";
    } else{
      Underscore += "_";
    }
  }
  
  for(int i=0; i!=50; ++i){
    cout << endl;
  }
  
  string guess;
  int wrong=0;
  
  while(1){
    if(wrong == 6){
      cout << "You have lost, answer: " << word << endl;
      break;
    }

    cout << Underscore << endl;
    cout << "There are " << word.length() << " letters with spaces" << endl;
    cout << "You have " << 6 - wrong << " more tries left" << endl;

    if(Underscore == word){
      cout << "You win! You are truly a master." << endl;
      break;
    }

    cout << "Guess a letter or a word" << endl;
    cin >> guess; 
     
    if(guess.length() > 1){ 
      if(guess == word){ 
        cout << "That's right, you win!" << endl;
        break;
      } else{
        cout << "wrong word " << endl;
        wrong++;
      }
    } else if(copy.find(guess) != -1){
        while(copy.find(guess) != -1){
          Underscore.replace(copy.find(guess), 1, guess); 
          copy.replace(copy.find(guess), 1, "_");
        }
    } else{
      cout << "That's wrong" << endl;
      wrong++;
    }
    
    cout << endl;
  }
  return 0;
} 
}
break;}
   
default:{
                cout<<"Exit the program"<<endl;
            }
}
}while (choice>='1'&&choice<='4');

return 0;    
}     
 
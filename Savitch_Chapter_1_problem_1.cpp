/* 
  File:   main.cpp
  Author: Juan Topete
  Created on February 26, 2017, 7:15 PM
  Purpose:  Count number of peas in each pod
 */

//System Libraries
#include <iostream>
using namespace std;

//Sample problem:
//Press return after entering a number
//Enter the number of Pods
//10
//Enter the number of Peas in a Pod:
//9
//If you have 10 pea pods
//and 9 peas in each pod, then
//you have 90 peas in all pods
//Function Prototypes

//Executable code begins here!!!
int main() 
{
    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    total_peas = number_of_pods * peas_per_pod;
    
    cout << "If you have ";
    cout << number_of_pods;
    cout << "pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << total_peas;
    cout << " peas in all the pods. \n";

    return 0;
}
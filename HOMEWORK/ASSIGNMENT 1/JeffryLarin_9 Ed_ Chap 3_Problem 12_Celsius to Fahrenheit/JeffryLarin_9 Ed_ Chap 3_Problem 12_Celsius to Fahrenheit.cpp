/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeffryLarin_9 Ed_ Chap 3_Problem 12_Celsius to Fahrenheit
 * Author: Jeffry Larin 
 *         CIS 17
 *         Professor Lehr 
 *         6/24/2020
 * Created on June 24, 2020, 4:46 PM
 */
#include<iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    float celsius;
    
cout<< "This program converts Celsius to Fahrenheit"<<endl;
cout <<endl;
cout<<"Please enter a temperature: "; cin>> celsius;
cout << "Thank you" <<endl;
cout << celsius<< " Celsius equals:";
cout << (((9/5)*celsius)+ 32)<< " Fahrenheit ";
    return 0;
}


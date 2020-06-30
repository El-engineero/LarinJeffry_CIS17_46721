/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeffryLarin_9 Ed_ Chap 3_Problem 13_Currency.cpp
 * Author: jeffrey
 *
 * Created on June 24, 2020, 11:06 PM
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    float dollars;
    const float YEN_PER_DOLLAR = 98.93, EURO_PER_DOLLAR = .74 ;
    float Yen, Euro;
    
    cout<< "This program will convert US Dollars(Green Backs!)"; 
    cout<< "into YEN and Euros" << endl; 
    cout<< endl; 
    cout<< "Please enter the amount of dollars you would like to convert" << endl;
    cout<< "dollars: "; cin >> dollars;       
    cout<< endl; 
    ////calculate Euro and Yen.////
    Yen  = YEN_PER_DOLLAR  * dollars;
    Euro = EURO_PER_DOLLAR * dollars;
    cout<< setprecision(2) << fixed;
    cout<< "Dollars: "<<setw(20) << dollars << endl; 
    cout<< "    Yen: "<<setw(20) << Yen  << endl; 
    cout<< "   Euro: "<<setw(20) << Euro  << endl;

    return 0;
}


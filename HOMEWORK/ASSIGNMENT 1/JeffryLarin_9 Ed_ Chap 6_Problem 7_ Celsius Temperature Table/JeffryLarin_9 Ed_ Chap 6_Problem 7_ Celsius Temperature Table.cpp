/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeffryLarin_9 Ed_ Chap 6_Problem 7_ Celsius Temperature Table.cpp
 * Author: jeffrey
 *
 * Created on June 26, 2020, 3:23 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*The formula for converting a temperature from Fahrenheit to 
 * Celsius is C= 5/9(F-32)
 * where F is the Fahrenheit temperature and C is Celsius 
 *temperature. Write a function should return the temperature 
 *converted to Celsius. Demonstrate the function by calling 
 *it in a loop that display a table of the Fahrenheit temperature 
 * 0 through 20 and their Celsius equivalents. 
 */
void formula();
int main(int argc, char** argv) 
{
    cout << " Fahrenheit to Celsius. " << endl;
    
    formula();
    
    return 0;
}
void formula()
{
    float Celcius,
          five = 5.00,
          nine = 9.00;
    for (int i = 0; i <= 20; i++)
    {
        Celcius = five/nine *(i-32);
        
        cout << i << " Fahrenheit equals: " << "\t";cout << setprecision(3) << Celcius <<" C"<<endl;
       // cout << Celcius << endl;
    }
   //cout << Celcius << endl;

}

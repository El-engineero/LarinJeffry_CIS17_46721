/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeffryLarin_9 Ed_ Chap 4_Problem 10_Days_in_month.cpp
 * Author: Jeffry
 *
 * Created on June 25, 2020, 12:15 AM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int Month;
    int Year;
    cout<< "This program will tell you how many days are in a particular month" <<endl;
    cout<< endl;
    
    cout<< "Enter a month (1-12) :"; cin>> Month;
    cout<< "Enter a year         :"; cin>> Year;
 
    if (Month == 1)//January 
     {
        cout << "31 days";
     }
       else if (Month == 2) //February
     {
        if (Year % 100 > 0)// not divisible by 100 
        {
            if (Year % 4 > 0) // not divisible by 4 
            {
                cout << "28 days"; //not leap year 
            }

            else 
            {
                cout << "29 days";

            }
        }
        else// if divisible by 100
        {
            if (Month % 400 > 0)
            {
                cout << "28 days";
            }
            else
            {
                cout << "29 days";

            }

        }
     }
    else if (Month == 3) // March
    {
        cout << "31 days";
    }
    else if (Month == 4)//April
    {
        cout << "30 days";
    }
    else if (Month == 5)// May
    {
        cout << "31 days";
    }
    else if (Month == 6) //June
    {
        cout << "30 days ";
    }
    else if (Month == 7)//July
    {
        cout << "31 days";
    }
    else if (Month == 8)// August
    {
        cout << "31 days";
    }
    else if (Month == 9)//September
    {
        cout << "30 days";
    }
    else if (Month == 10)// October
    {
        cout << "31 days";
    }
    else if (Month == 11)//November
    {
        cout << "30 days";
    }
    else if (Month == 12)// December 
    {
        cout << "31 days";
    }
    return 0;
}


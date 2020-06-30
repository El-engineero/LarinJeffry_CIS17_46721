/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeffryLarin_9 Ed_ Chap 5_Problem 11_Population.cpp
 * Author: jeffrey
 *
 * Created on June 25, 2020, 2:56 AM
 */
#include<iostream>
#include <cstdlib>

using namespace std;
/*
 * 
 */
int main(int argc, char** argv)
{
    int Population;
    float Average_Daily_Increase;
    int days;
  //This program predict population size. 
    cout << "This program predicts population size based of ";
    cout << "a few intial factors" << endl;
    cout << "Intial Population size " << endl; 
    cout << "Average daily increase" << endl; 
    cout << "Time spent multiplying" << endl; 
    cout << endl;
  ////gather how many orgnisms are alive initially?   
    cout << "How many organisms are alive? " << endl;
    cout << "Please enter a population of at least 2 organisms " << endl; 
    cout << "population: "; cin >> Population;
    
    while (Population < 2)
    {
        cout << "Please enter a population of at least 2 organisms" <<endl;
        cout << "population: "; cin >> Population;
    }
    cout << "Please enter a positive Average daily Increase as a percentage " << endl;
    cout << "% Average daily Increase: "; cin >> Average_Daily_Increase;
    while (Average_Daily_Increase < 0)
    {
        cout << "Please enter a positive Average daily Increase. "<<endl;
        cout << "Average daily Increase: "; cin >> Average_Daily_Increase;
    }
    cout << "How many days will they multiply for?" << endl;
    cout << "days: "; cin >> days; 
    while (days < 1)
    {
        cout << "please enter a time over 0 days"<<endl;
        cout << "time :"; cin >> days;
    }

    for (int num = 1; num <= days; num++) // for each day
        // calculate the population
        cout <<"day"<< num<<"\t\t"<< "Population= " << (num * Average_Daily_Increase * days) << endl;

    return 0;
}


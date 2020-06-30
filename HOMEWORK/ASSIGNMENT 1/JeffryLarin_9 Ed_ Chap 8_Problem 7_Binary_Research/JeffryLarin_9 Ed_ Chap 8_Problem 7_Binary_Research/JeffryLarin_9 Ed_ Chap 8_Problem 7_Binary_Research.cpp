/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeffryLarin_9 Ed_ Chap 8_Problem 7_Binary_Research
 * Author: JEffry Larin
 *
 * Created on June 29, 2020, 11:00 AM 
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * Modify the binary search function presented in this chapter so it searches 
 * an array of strings instead of an array of ints. Test the function with a 
 * driver program. Use Program 8-8 as a skeleton to complete. (The array must 
 * be sorted before the binary search will work.)
 */
const int NUM_NAMES = 20;

void Sorter(string name[]);
void Array(string name[]);
int binarySearch(string name[], string Goal);

int main(int argc, char** argv) {

    string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                               "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                               "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };

    string Goal;
    int Housing = 0;

    Sorter(names);   
    Array(names); 

   
    cout << "What name are you looking for?" << endl;
    
    getline(cin, Goal);
    Housing = binarySearch(names, Goal);

    if (Housing != -1) 
    {
        cout << Goal << " is found at position " << Housing + 1 << endl;
    }
    else 
     {
        cout << Goal << " is not found." << endl;
     }
        return 0;
}

void Sorter(string name[]) {
    int min;
    string minV;
    string temp;

    for (int i = 0; i < NUM_NAMES - 1; i++) 
    {
        min = i;
        minV = name[i];
        for (int j = i + 1; j < NUM_NAMES; j++) 
{
            if (name[j] < minV) 
            {
                minV = name[j];
                min = j;
            }
        }
        temp = name[min];
        name[min] = name[i];
        name[i] = temp;
    }
}

void Array(string name[]) 
{
    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << name[i] << endl;
    }
}

int binarySearch(string name[], string Goal)
{
    int Begin = 0,                  
        Final = NUM_NAMES - 1,      
        mid,                    
        position = -1;          
    bool found = false;            

    while (!found && Begin <= Final) {
        mid = (Begin + Final) / 2;
        if (name[mid] == Goal)
        {
            found = true;
            position = mid;
        }
        else if (name[mid] > Goal)
        {
            Final = mid - 1;
        }
        else 
        {
            Begin = mid + 1;
        }
    }
    return position;
}
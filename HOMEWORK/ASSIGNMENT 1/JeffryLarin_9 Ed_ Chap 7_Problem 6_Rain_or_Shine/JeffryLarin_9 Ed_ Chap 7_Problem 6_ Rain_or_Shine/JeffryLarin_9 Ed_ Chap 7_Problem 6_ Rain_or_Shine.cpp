/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  *   File: JeffryLarin_9 Ed_ Chap 7_Problem 6_ Rain_or_Shine.cpp  
  * Author: Jeffry Larin
  *
  * Created on June 23, 2020, 2:35 PM
  */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*
  An amateur meteorologist wants to keep track of weather changes during past
  year's three-month summer season, and has designated each day as either
  rainy ('R'), cloudy ('C'), or sunny ('S'). Write a program that stores this
  information in a 3 x 30 array of characters, where the row indicates the
  month (0 = June, 1 = July, 2 = August) and the column indicates the day of
  the month. Note that data is not being collected for the 31st of any month.
  The program should begin by reading the weather data in from a file. Then
  it should create a report that displays for each month and for the whole
  three-month period, how many days were rainy, how many were cloudy, and
  how many were sunny. It should also report which of the three months had
  the largest number of rainy days. Data for the program can be found in
  RainOrShine.txt file.
 */
int main(int argc, char** argv) {
    //Initialize Variables. 
    const int Months = 3,
                Days = 30;
         char weather[Months][Days];
          int rain = 0,
              cloud = 0,
              sunny = 0,
              Array = 0,
              Rain_Month[Months] = { 0, 0, 0 };
      string month[Months] = { "June", "July", "August" };
// open file.  
    ifstream file;
    file.open("RainOrShine.txt");
    // start array for each month
    //Vertical array
    for (int i = 0; i < Months; i++) 
    {
        cout << setw(8) << month[i];    // row header
        //for each day
        //Horizontal array
        for (int j = 0; j < Days; j++) {
            file >> weather[i][j];
            cout << setw(2) << weather[i][j];
            if (weather[i][j] == 'R') {
                Rain_Month[i]++;    // rainy days per month
                rain++;       // total rainy days
            }
            else if (weather[i][j] == 'C') {
                cloud++;
            }
            else if (weather[i][j] == 'S') {
                sunny++;
            }
        }
        if (Rain_Month[i] > Rain_Month[Array]) {
            Array = i;
        }
        cout << endl;
    }
    //closing files 
    cout << endl << endl;
    file.close();
    // cout staements 
    cout << "Rainy Days: " << rain << endl;
    cout << "Cloudy Days: " << cloud << endl;
    cout << "Sunny Days: " << sunny << endl;
    cout << "Month with Largest Number of Rainy Days: ";
    cout << month[Array] << " at " << Rain_Month[Array];
    cout << " rainy days" << endl << endl;

    return 0;
}
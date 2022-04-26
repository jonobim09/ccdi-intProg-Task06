// Task6-Novino, Jolly.cpp : This file contains the 'main' function. Program execution begins and ends there.
///******************************************************************************

//Task 06 - A program that computes the number of years 
// a company's sales to reach 1.5M
// using a 5.5% annual growth rate.
// Also, displays the sales each year
// Programmed by : Jolly Novino on April 26, 2022

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double GROWTH_RATE = 0.055; //Decimal equivalent of 5.5%
                                     //5.5 divided by 100
    double sales = 0.0;
    double annualIncrease = 0.0;
    int years = 0;
    
    cout << "Current Year's Sale: \n";
    cin >> sales;

    while (sales < 1500000.0)
    {
        annualIncrease = sales * GROWTH_RATE;
        sales += annualIncrease;
        years += 1;
    } //end while

    cout << fixed << setprecision(2);
    cout << "Sales " << years << "years from now: "
    << sales << endl;

    return 0;
} //end main

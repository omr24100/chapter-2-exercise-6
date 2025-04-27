// chapter 2 exercise 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File Name: chapter 2 exercise 6 
Programer: Olivia Ruiz
Date: 4/26/25
Requirements:Suppose an employee gets paid every two weeks and earns $2,200 each pay period. In a year, the employee gets paid 26 times. Write a program that defines the following variables: 
The program should calculate the employee’s total annual pay by multiplying the employee’s pay amount by the number of pay periods in a year and store the result in the annualPay variable.
Display the total annual pay on the screen.
*/

#include <iostream>
using namespace std;

int main() {
   
    double payPerPeriod = 2200.0;      
    int payPeriodsPerYear = 26;        

   
    double annualPay = payPerPeriod * payPeriodsPerYear;

    cout << "The total annual pay is: $" << annualPay << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

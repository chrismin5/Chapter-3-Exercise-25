/*  Program File Name: Chapter 3 Exercise 25
    Programmer: Christian Min
    Date: 10/4/26
    Requirements:
    Write a program that calculates the number of vines that will fit in the row. Ask the user to enter the
    following information: length of the row in feet, amount of space used by an end-post assembly in feet,
    and the amount of space between the vines in feet. Display the nunmber of grapevines that will fit in
    the row.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double v, r, e, s;      //To hold the value for each variable in the given formula

    cout << "Enter the length of the row, in feet: ";
    cin >> r;
    cout << "Enter the amount of space used by an end-post assembly, in feet: ";
    cin >> e;
    cout << "Enter the amount of space between the vines, in feet: ";
    cin >> s;

    v = ((r - (2 * e)) / s);        //formula to calculate the number of grapevines that will fit in the row

    cout << "\n" << "The number of grapevines that will fit in the row is: " << v << "\n";
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

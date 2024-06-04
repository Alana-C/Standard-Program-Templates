//This is a comment
/* multiline 
comment
*/

//Whitespace is ignored!
//Capitalization matters!

//at the top, to allow input and output
#include <iostream>
//for math
#include <cmath>
//standard
#include <cstdlib>

using namespace std;

//the main program, what is executed
int main() {
    //each statement ends with semicolon
    //assign a variable, with a type
    double wage;
    wage = 20.0;


    //const for constants, all caps and underscores
    const int HOURS_PER_WEEK = 40;

    //cin "characters in" to get input from keyboard, >> to assign to variable
    cin >> wage;

    int a = wage;

    switch(a) {
        case 0:
            cout << "Get a job!" << endl;
            break;
        default:
            break;
    }

    if (wage <= 12.0) {
        cout << "Ouch." << endl;
    }
    else if (wage >= 60) {
        cout << "Nice." << endl;
    }

    //cout to output or 'print', no automatic end line, << concatenates
    cout << "Salary is " << wage * HOURS_PER_WEEK * 52 << endl;
    cout << "Monthly Salary is " << wage * HOURS_PER_WEEK * 52 / 12 << endl;
    //endl (or "/n") is enter
    cout << endl;

    //signifies the end of program 
    return 0;
}

// Notes
    // (static_cast<type>(expression)) will convert variable type
    // int/int results in int, e.g. 3/5 -> 1
    // char 'c' string "string" 
    // names are only valid within their scope

// Compiling
    // command line, in your program's folder
    // standard:
    // g++ -o name-of-executable yourfile.cpp
    // to show warnings:
    // g++ -Wall yourfile.cpp

    //test (compile/run)  often


//Compile errors
    //errors are at or before reported
    //if several, look to fix the FIRST and recompile

//Compile warnings
    //good practice is to see and address all

//Bugs
    //if compiles, but doesn't work, it's a logic error or bug
    //test small sections, outputs, flags, etc

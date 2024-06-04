//This is a comment
/* multiline 
comment
*/

//Whitespace is ignored!
//Capitalization matters!

//at the top, to allow input and output
#include <iostream>
using namespace std;

//the main program, what is executed
int main() {
    //each statement ends with semicolon
    //assign a variable, with a type
    int wage;
    wage = 20;

    //cin "characters in" to get input from keyboard, >> to assign to variable
    cin >> wage;

    //cout to output or 'print', no automatic end line, << concatenates
    cout << "Salary is " << wage * 40 * 52;
    //endl (or "/n") is enter
    cout << endl;

    //signifies the end of program 
    return 0;
}

// Compiling
    // command line, in your program's folder
    // standard:
    // g++ -o yourfile.cpp
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

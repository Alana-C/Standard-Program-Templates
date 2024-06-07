//This is a comment
/* multiline 
comment
*/

//Whitespace is ignored!
//Capitalization matters!
//The Header--wherein functions, classes, etc are defined and other libraries or documents are imported
//at the top, to allow input and output
#include <iostream>
//for math
#include <cmath>
//standard
#include <cstdlib>
#include <list>

using namespace std;

//define a class
class Standard {
    public:
        Standard();
        void SetVariable(int paramater);
        int GetVariable() const;
    private:
        int example; 
};
//Constructor--called every time a variable of the class is declared
Standard::Standard() {
    example = 0; //variables often have a default value that means unset
}
//define functions declared in class
void Standard::SetVariable(int parameter){
    example = parameter;
}
int Standard::GetVariable() const {
    return example;
}

//the main program, what is executed
int main() {
    //each statement ends with semicolon
    //assign a variable, with a type
    double wage;
    wage = 20.0;

    //const for constants, all caps and underscores
    const int HOURS_PER_WEEK = 40;

    //Arrays, Lists, Vectors (Vector default)

    //declare array--from C, size fixed, must be deallocated explicitly, must be defined locally
    int* exampleArray = new int[7];
    delete[] exampleArray;

    //declare vector--subset of array, can resize/mutate/iterate, can copy or assign directly
    vector<int> hoursByDay;

    //declare a list--double linked list--non contiguous memory
    list<int> exampleList;

    //ways to input values--works for all
    //push back adds to end
    vector<int> type1;
    for (int i = 0; i < 5; i + 1) {
        type1.push_back(10);
    }
    //declare with length and efault value
    vector<int> type2(5, 10);
    //all at once (like an array)
    vector<int> type3{10, 10, 10, 10, 10};


    //create an object of type class
    Standard classObject;
    classObject.SetVariable(5);


    //cin "characters in" to get input from keyboard, >> to assign to variable
    cin >> wage;

    int a = wage;

    //conditionals
    //switch--specific instances, simplified
    switch(a) {
        case 0:
            cout << "Get a job!" << endl;
            break;
        default:
            break;
    }

    //standard if, else, else if setup
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
    // often needs import for data types such as vectors, lists, etc
    // character single quote-- 'c' string double quote-- "string" 
    // names are only valid within their scope

// Compiling
    // command line, in your program's folder
    // standard:
    // g++ -o name-of-executable yourfile.cpp
    // to show warnings:
    // g++ -Wall yourfile.cpp

    // to run:
    // ./executable
    // test (compile/run)  often


//Compile errors
    //errors are at or before reported
    //if several, look to fix the FIRST and recompile

//Compile warnings
    //good practice is to see and address all

//Bugs
    //if compiles, but doesn't work, it's a logic error or bug
    //test small sections, outputs, flags, etc

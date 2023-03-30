#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>

#include "bracket_checker.h"

using namespace std;

int main(int argc, char **argv) {
    {
        auto start = chrono::high_resolution_clock::now();  // start the timer
        bracket_check checker;                              // create an object of the class
        for (int i = 1; i < argc; ++i) {                    // loop through the arguments
            if (checker.ArrayBasedChecker(argv[i]))
                cout << " : OK" << endl;  // check if the string is valid
            else
                break;
        }
        auto end = chrono::high_resolution_clock::now();                                                 // end the timer
        chrono::duration<double> elapsed = end - start;                                                  // calculate the elapsed time
        cout << "Elapsed time for DSList implementation " << elapsed.count() << " milliseconds" << endl;  // print the elapsed time
    }

    {
        auto start = chrono::high_resolution_clock::now();  // start the timer
        bracket_check checker;                              // create an object of the class
        for (int i = 1; i < argc; ++i) {                    // loop through the arguments
            if (checker.ArrayBasedChecker(argv[i]))
                cout << " : OK" << endl;  // check if the string is valid
            else
                break;
        }
        auto end = chrono::high_resolution_clock::now();                                                // end the timer
        chrono::duration<double> elapsed = end - start;                                                 // calculate the elapsed time
        cout << "Elapsed time for Array implementation: " << elapsed.count() << " milliseconds" << endl;  // print the elapsed time
    }
    return 1;
}
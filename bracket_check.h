#ifndef BRACKETS_H
#define BRACKETS_H
#include <fstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class bracket_checker {
   public:
    bool DSStackChecker(std::vector<int> expression);
    bool DSListChecker(string expression);
};

#endif
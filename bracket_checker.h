#include <chrono>
#include <fstream>
#include <iostream>
#include <stack>
#include <string>
#include "DSStack_List.h"
#include "DSStack_Array.h"


using namespace std;

class bracket_check {
public:
    bool ArrayBasedChecker(char *filename) {
        ifstream input(filename);
        if (!input) {
            cerr << "Error: Could not open file " << filename << endl;
            return false;
        }
        int line_number = 0;
        string line;
        DSStack_Array<char> st; //todo: replace the following line with `DSStack_Array<char> st;` once you are done implementing the DSStack_array class
        while (getline(input, line)) {
            line_number++;
            for (std::string::size_type i = 0; i < line.size(); i++) {
                {
                    if (line[i] == '(' || line[i] == '{' || line[i] == '[') {
                        st.push(line[i]);
                    } else if (line[i] == ')' || line[i] == '}' || line[i] == ']') {
                        if (st.isEmpty() == true) {
                            // todo: print information about error below
                            std::cout << "Error at line " << line_number << ": No opening bracket found for " << line[i]
                                      << std::endl;
                            return false;
                        }
                        char curr = st.top();
                        if ((curr == '(' && line[i] == ')') || (curr == '{' && line[i] == '}') ||
                            (curr == '[' && line[i] == ']')) {
                            st.pop();
                        } else {
                            // todo: print information about error below
                            std::cout << "Error at line " << line_number << ": Mismatched brackets found. Expected "
                                      << curr << ", but found " << line[i] << std::endl;
                            return false;
                        }
                    }
                }
            }

            if (st.isEmpty() == false) {
                // todo: print information about error below
                std::cout << "Error at end of file: No closing bracket found for " << st.top() << std::endl;
                return false;
            }

            return true;
        }
    }
};
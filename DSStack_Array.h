#ifndef VALIDSTRING_H
#define VALIDSTRING_H

#include <vector>

//todo: finish this class, keep every function call simple and directly referencing variable `data`, look at the definition for `push(int)`
/*template <typename T>
class DSStack_Array {
   private:
    std::vector<T> data;

   public:
    void push(int element) { data.push_back(element); }
    T pop() { return ; }
    T top() { return ; }
    bool isEmpty() { return ; }
};
*/

template <typename T>
class DSStack_Array {
   private:
    std::vector<T> data;

   public:
    void push(int element) { data.push_back(element); } // Add the element to the end of the vector
    T pop() { return data.back(); } // Remove and return the last element of the vector
    T top() { return data.back(); } // Return the last element of the vector
    bool isEmpty() { return data.empty(); } // Check if the vector is empty and return true if it is
};
#endif

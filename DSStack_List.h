#ifndef DSSTACKLIST_H
#define DSSTACKLIST_H

#include <stack>
#include <string>
#include "DSList.h"

//todo: finish this class, keep every function call simple and directly referencing variable `data`, look at the definition for `push(int)`
/*template <typename T>
class DSStack_List {
   private:
    DSList<T> data;

   public:
    void push(int element) { data.push_front(element); }
    T pop() { return ; }
    T top() { return ; }
    bool isEmpty() { return ; }
};
*/

template <typename T>
class DSStack_List {
   private:
    DSList<T> data;

   public:
    void push(int element) { data.push_front(element); } //todo: add the element to the front of the list
    T pop() { return data.pop_front(); } //todo: remove and return the first element of the list
    T top() { return data.front(); } //todo: return the first element of the list
    bool isEmpty() { return data.isEmpty(); } //todo: check if the list is empty and return true if it is
};
#endif

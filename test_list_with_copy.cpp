#include <iostream>
#include "DSList.h"

// use the copy constructor and the copy assignment operator

int main()
{
    std::cout << std::boolalpha; // print true/false instead of 1/0
    DSList<int> l; // create a list of integers
    for (size_t i = 10; i > 0; --i) // add 10 elements to the list
        l.push_front(i); // add an element to the front of the list
    // make a copy of the list (calls copy constructor)
    DSList<int> l2(l); //  l2 is a copy of l
    std::cout << "l:  "; // print the container's contents
    l.print(); 
    std::cout << "l2: ";
    l2.print();
    l.pop_front();
    std::cout << "l:  ";
    l.print(); 
    std::cout << "l2: ";
    l2.print(); 
    // use copy assignment operator
    DSList<int> l3;
    l3 = l;

    return 0;
}
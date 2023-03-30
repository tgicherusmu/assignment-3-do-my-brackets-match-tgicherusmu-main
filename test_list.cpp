#include <iostream>
#include "DSList.h"

// write a simple singly-linked list that works with this test code.

int main() // test code
{
    std::cout << std::boolalpha; // print true/false instead of 1/0
 
    DSList<int> l; // create a list of integers

    for (size_t i = 10; i > 0; --i) // add 10 elements to the list
        l.push_front(i); // add an element to the front of the list

  
    l.print(); // print the container's contents
    std::cout << "empty: " << l.empty() << "\n"; // print if the container is empty
    std::cout << "size: " << l.size() << "\n\n"; // print the size of the container

    std::cout << "first element: " << l.front() << "\n\n"; // print the first element

    l.pop_front(); // remove the first element
    
    // we will implement that later...
    // l.remove(5); // remove all elements with value 5
    // std::cout << "size (after pos and remove): " << l.size() << "\n\n";

    l.print();

    return 0;
}
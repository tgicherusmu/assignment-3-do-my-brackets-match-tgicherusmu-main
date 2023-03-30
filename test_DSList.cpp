#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "DSList.h"

// add includes


TEST_CASE("Check that DSList works", "[DSList]"){
    // add test cases (create lists and specify what the expected output is)

    //REQUIRE(0 + 1 == 1);
    // This creates an error
    //REQUIRE(0 == 1);
    /*
    DSList<int> list;
    REQUIRE(list.size() == 0);
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);
       REQUIRE(list.size() == 3);
    */


    SECTION("Removing Sections"){
        DSList<int> list;
        REQUIRE(list.size() == 0);
        list.push_front(3);
        list.push_front(2);
        list.push_front(1);
        list.pop_front();
        REQUIRE(list.size() == 2);
        list.pop_front();
        REQUIRE(list.size() == 1);
        list.pop_front();
        REQUIRE(list.size() == 0);
    }
    SECTION("Assignment Operator Section"){
        DSList<int> list;
        REQUIRE(list.size() == 0);
        list.push_front(3);
        list.push_front(2);
        list.push_front(1);
        DSList<int> list2;
        list2 = list;
        REQUIRE(list2.size() == 3);
        list2.pop_front();
        REQUIRE(list2.size() == 2);
        REQUIRE(list.size() == 3);
    }
    SECTION("Copy Constructor Section"){
        DSList<int> list;
        REQUIRE(list.size() == 0);
        list.push_front(3);
        list.push_front(2);
        list.push_front(1);
        DSList<int> list2(list);
        REQUIRE(list2.size() == 3);
        list2.pop_front();
        REQUIRE(list2.size() == 2);
        REQUIRE(list.size() == 3);
    }
    SECTION("Pushing Front Section"){
        DSList<int> list;
        REQUIRE(list.size() == 0);
        list.push_front(3);
        list.push_front(2);
        list.push_front(1);
        list.push_front(0);
        REQUIRE(list.size() == 4);
        REQUIRE(list.front() == 0);
    }
    SECTION("Popping Front Section"){
        DSList<int> list;
        REQUIRE(list.size() == 0);
        list.push_front(3);
        list.push_front(2);
        list.push_front(1);
        list.pop_front();
        REQUIRE(list.size() == 2);
        REQUIRE(list.front() == 2);
    }
    SECTION("Empty Section"){
        DSList<int> list;
        REQUIRE(list.size() == 0);
        list.push_front(3);
        list.push_front(2);
        list.push_front(1);
        REQUIRE(list.empty() == false);
        list.pop_front();
        list.pop_front();
        list.pop_front();
        REQUIRE(list.empty() == true);
    }




}

// you can run the test using Run CTest in the task bar or by running the tests executable.
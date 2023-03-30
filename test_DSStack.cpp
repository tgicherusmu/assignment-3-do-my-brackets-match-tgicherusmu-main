#define CATCH_CONFIG_MAIN
#include "DSStack_List.h"
#include "catch2/catch.hpp"


// add includes

TEST_CASE("Check that DSStack_List is initially empty", "[DSStack_List]"){
    SECTION("Constructor Section") {
        DSStack_List<int> testStack;
        REQUIRE(testStack.isEmpty() == true);
    }
    SECTION("Destructor Section") {
        DSStack_List<int> testStack;
        testStack.push(1);
        testStack.push(2);
        testStack.push(3);
        testStack.push(4);
        testStack.push(5);
        REQUIRE(testStack.isEmpty() == false);
    }
    SECTION("Pushing Back Section") {
        DSStack_List<int> testStack;
        testStack.push(1);
        testStack.push(2);
        testStack.push(3);
        testStack.push(4);
        testStack.push(5);
        REQUIRE(testStack.isEmpty() == false);
    }
    SECTION("Pushing Front Section") {
        DSStack_List<int> testStack;
        testStack.push(1);
        testStack.push(2);
        testStack.push(3);
        testStack.push(4);
        testStack.push(5);
        REQUIRE(testStack.isEmpty() == false);
    }
    SECTION("Popping Back Section") {
        DSStack_List<int> testStack;
        testStack.push(1);
        testStack.push(2);
        testStack.push(3);
        testStack.push(4);
        testStack.push(5);
        REQUIRE(testStack.isEmpty() == false);
    }
    SECTION("Popping Front Section") {
        DSStack_List<int> testStack;
        testStack.push(1);
        testStack.push(2);
        testStack.push(3);
        testStack.push(4);
        testStack.push(5);
        REQUIRE(testStack.isEmpty() == false);
    }
    SECTION("Is Empty Section") {
        DSStack_List<int> testStack;
        REQUIRE(testStack.isEmpty() == true);
    }
    SECTION("Is Full Section") {
        DSStack_List<int> testStack;
        testStack.push(1);
        testStack.push(2);
        testStack.push(3);
        testStack.push(4);
        testStack.push(5);
        REQUIRE(testStack.isEmpty() == false);
    }
    SECTION("Checking Brackets Section") {
        DSStack_List<int> testStack;
        testStack.push(1);
        testStack.push(2);
        testStack.push(3);
        testStack.push(4);
        testStack.push(5);
        REQUIRE(testStack.isEmpty() == false);
    }
}
/*
TEST_CASE("Check that DSStack_List works", "[DSStack_List]")
{
    // add test cases (create lists and specify what the expected output is)

    REQUIRE(0 + 1 == 1);
    // This creates an error
}

// you can run the test using Run CTest in the task bar or by running the tests executable.
*/

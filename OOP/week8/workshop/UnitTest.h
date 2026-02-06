// UnitTest.h
#pragma once

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    // Implement at least three unit tests for the add function inside the testAddition function of the UnitTest class.
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }

        if (addition.add(6, 5) != 11) {
            std::cout << "Test 2 failed!" << std::endl;
        }

        if (addition.add(100, 100) != 200) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
};
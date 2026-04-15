#ifndef TEST_CASES
#define TEST_CASES

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <chrono>
#include <cstdlib>
#include <ctime>

class Test_cases {
private:
    std::vector<std::vector<int>> testCase;
    std::vector<std::vector<int>> expectedOut;
    int numCases;
    static bool randomSeeded;

    int generateNumber(int lowerV, int upperV);
    std::vector<int> generateRandomVector(int n, int lowerV=-1e9, int upperV=1e9);
    void printVector(std::vector<int>& v);
public:
    Test_cases();  
    int runCases(const std::function<std::vector<int>(const std::vector<int>&)>& func);
    int getNumCases();
    ~Test_cases();
};

#endif
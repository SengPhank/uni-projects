#include "Test_cases.h"

/* PRIVATE
// var
std::vector<std::vector<int>> testCase;
std::vector<std::vector<int>> expectedOut;
int numCases;
static bool randomSeeded;

// func
int generateNumber(int lowerV, int upperV);
std::vector<int> generateRandomVector(int n);
void printVector(std::vector<int>& v);
*/

bool Test_cases::randomSeeded = false;

// pub
Test_cases::Test_cases() {
    // attempt to seed randomness
    if (!randomSeeded) {
        std::srand(std::time(0));
        randomSeeded = true;
    }

    // init num test cases
    this->numCases = 5;
    testCase.resize(numCases);
    expectedOut.resize(numCases);
    
    // custom Test cases
    int numCustom = 0;
    testCase[1] = {1, 3, 2, 7, 4};
    testCase[0] = {1, 2, 3, 4, 5, 6};
    

    // make test cases
    int distribution = 1e3 / numCases;
    for (int i = numCustom; i < numCases; i++) {
        testCase[i] = generateRandomVector(distribution*(i+1));
    }

    // make expected outputs
    for (int i = 0; i < numCases; i++) {
        std::vector<int> cpy = testCase[i];
        sort(cpy.begin(), cpy.end());
        expectedOut[i] = cpy;
    }

    // generated testcase test
    for (int i = 0; i < numCases; i++) {
        std::cout << "i: " << i << ", tsize: " << testCase[i].size() << ", esize: " << expectedOut[i].size() << "\n";
    }
}
// functional: function<output(input param)> nameOfFunc
int Test_cases::runCases(const std::function<std::vector<int>(const std::vector<int>&)>& func) {
    int passed = 0;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < this->numCases; i++) {
        std::vector<int> out = func(this->testCase[i]);
        if (out != this->expectedOut[i]) {
            std::cout << "W/A on Test case Index: " << i << "\nInput: ";
            printVector(testCase[i]);
            std::cout << "Your out: ";
            printVector(out);
            std::cout << "Expected out: ";
            printVector(expectedOut[i]);
            break;
        }
        passed++;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Runtime: " << duration.count() << " ms" << std::endl;
    return passed;
}

int Test_cases::getNumCases() { return this->numCases; }
Test_cases::~Test_cases() {}

// priv
int Test_cases::generateNumber(int lowerV, int upperV) {
    int range = upperV - lowerV + 1;
    int rValue = (std::rand() % range) + lowerV;
    return rValue;
}
std::vector<int> Test_cases::generateRandomVector(int n, int lowerV, int upperV) {
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = generateNumber(lowerV, upperV);
    }
    return v;
}
void Test_cases::printVector(std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}
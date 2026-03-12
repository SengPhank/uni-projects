#include "Reverser.h"
using namespace std;

/*
reverseDigit(int value)

// This function takes in a *non-negative* int value and reverses the digits using recursion
For example,
Reverser r;
int reversedNumber = r.reverseDigit(12345)
reversedNumber would now have the value:
54321

string reverseString(string characters)

// The function takes in a std::string and returns the reversed string.
*/
    
int Reverser::reverseDigit(int value) {
    return reverseDigitHelper(value);
}
// 1234 
/*
n = 4, r = 4, p = 10^3 = 1000
*/
int Reverser::reverseDigitHelper(int value, int r, int n) {
    if (value < 0) return -1;
    if (value == 0) return 0;
    // init
    if (n == -1) n = log10(value)+1;
    if (r == -1) r = n;

    // recursive
    int p = pow(10, r-1), pr = pow(10, n-r);
    // get the left-most char and put to the right
    int v = (value / p) * pr;
    // cout << "lmost: " << value/p << ", 2p: " << pr << endl;
    return v + reverseDigitHelper(value%p, r-1, n);
}
// 132 -> 231 = 100 + 30 + 2 -> 200 + 30 + 1
string Reverser::reverseString(string characters) {
    return reverseStringHelper(characters);
}
string Reverser::reverseStringHelper(string& s, int idx) {
    if(idx >= s.size()/2) return s;
    swap(s[idx], s[s.size()-idx-1]);
    return reverseStringHelper(s, idx+1);
} 


// int main(void) {
//     Reverser r;
    
//     string t1 = r.reverseString("abcd");
//     string t2 = r.reverseString("abcde");
//     int t3 = r.reverseDigit(1234);
//     string t4 = r.reverseString("b");
//     int t5 = r.reverseDigit(-8008);
//     if (t1 != "dcba") {
//         cout << "CASE1: INVALID, OUT: " << t1 << endl;
//     } else {
//         cout << "CASE1: PASS!" << endl;
//     }
//     if (t2 != "edcba") {
//         cout << "CASE2: INVALID, OUT: " << t2 << endl;
//     } else {
//         cout << "CASE2: PASS!" << endl;
//     }
//     if (t3 != 4321) {
//         cout << "CASE3: INVALID, OUT: " << t3 << endl;
//     } else {
//         cout << "CASE3: PASS!" << endl;
//     }
//     if (t4 != "b") {
//         cout << "CASE4: INVALID, OUT: " << t4 << endl;
//     } else {
//         cout << "CASE4: PASS!" << endl;
//     }
//     if (t5 != -1) {
//         cout << "CASE5: INVALID, OUT: " << t5    << endl;
//     } else {
//         cout << "CASE5: PASS!" << endl;
//     }

//     return 0;
// }
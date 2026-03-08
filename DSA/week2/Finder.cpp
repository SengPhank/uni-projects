#include "Finder.h"

/*
Optimise the implementation of the vector<int> findSubstrings(string s1, string s2) method by trying the following steps.

1. Find operations that are performed several times, and try to avoid them.
Hint: There are variants of string::find() Links to an external site. method that can find substrings starting from specified index, instead of the start of the string.

2. If a substring of s2 with a length of i was not found in s1, the longer substrings of s2 will not be found either.

3. What will be the time complexity of the optimised algorithm?
*/

using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
    int m = s1.size(), n = s2.size();
    vector<int> result(n, -1);

    // BETTER O(m * n)
    int c = 0; // represent the current prefix substr
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (s1[i+j] != s2[j]) break;
            if (j < c) continue;
            result[c] = i;
            c++;
        }
        // break early if already found
        if (c == n) break;
    }

    return result;
}

vector<int> Finder::unOpfindSubstrings(string s1, string s2) {
    int m = s1.size(), n = s2.size();
    vector<int> result;

    // UNOPTIMISED O(n^2 + m*n) 
    // where m = s1.size(), n = s2.size();

    for(size_t i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0, i));
        if (found != string::npos) {
            result.push_back(found);
        } else {
            result.push_back(-1);
        }
    }
    return result;
}


// 5 5 5 5 4
// 554
// 5 5 5 5 4
// 554
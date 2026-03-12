#include "EfficientTruckloads.h"
using namespace std;
/*
constraints 
-	numCrates will be between 2 and 10,000, inclusive.
-	loadSize loadSize will be be between 1 and (numCrates - 1), inclusive.
*/
int Truckloads::numTrucks(int numCrates, int loadSize, vector<int> memo, bool start) {
    if (start) memo.resize(numCrates+1, -1);
    // base case
    if (numCrates <= loadSize) return 1;
    // memo
    if (memo[numCrates] == -1) {
        memo[numCrates] = numTrucks(numCrates/2, loadSize, memo, false) + numTrucks((numCrates+1)/2, loadSize, memo, false); 
    }
    return memo[numCrates];
    
}

// int main(void){
//     Truckloads t;
    
//     int t1 = t.numTrucks(14, 3);
//     int t2 = t.numTrucks(15, 1);
//     int t3 = t.numTrucks(1024, 5);
//     if (t1 != 6) {
//         cout << "CASE1: INVALID, OUT: " << t1 << endl;
//     } else {
//         cout << "CASE1: PASS!" << endl;
//     }
//     if (t2 != 15) {
//         cout << "CASE2: INVALID, OUT: " << t2 << endl;
//     } else {
//         cout << "CASE2: PASS!" << endl;
//     }
//     if (t3 != 256) {
//         cout << "CASE3: INVALID, OUT: " << t3 << endl;
//     } else {
//         cout << "CASE3: PASS!" << endl;
//     }
// }
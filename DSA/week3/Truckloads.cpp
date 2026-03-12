#include "Truckloads.h"
using namespace std;

/*
Problem Statement
We have a pile of crates at our warehouse that we want to load onto trucks. 
Our plan is to divide the pile in half forming two smaller piles, then continuing 
dividing each of the small piles in half until we get piles that will fit on a truck. 
(Of course, when we divide an odd number of crates in "half", one of the resulting 
piles will have one more crate than the other.) Our problem is to determine how many 
trucks we will need to ship the crates.

Create a class Truckloads that contains a method numTrucks that is 
given numCrates (the number of crates at the warehouse) 
and loadSize (the maximum number of crates that will fit in a truck) 
and that returns the number of trucks required. 
*/

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1;
    return numTrucks(numCrates/2, loadSize) + numTrucks((numCrates+1)/2, loadSize); 
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
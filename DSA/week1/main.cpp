#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <chrono>

int main(void) {
    // seed
    srand(time(NULL));

    // Create vector
    int n;
    std::cin >> n;
    if (n <= 0) return 0;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }

    // Start Timer
    auto init = std::chrono::high_resolution_clock::now();
    // Access 1000 random items inside v
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        // Just sum, do nothing with the sum
        sum += v[rand() % n];
    }
    // End Timer and calculate
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - init;

    // Returns the average time to access a random index on v
    std::cout << (double) (elapsed.count())/1000 << std::endl;
    return 0;
}
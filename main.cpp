#include <iostream>
#include <chrono>
#include <iomanip>
#include <random>
#include <vector>

#include "Method1.h"
#include "Method2.h"
#include "Method3.h"
#include "Method4.h"
#include "Method5.h"

using namespace std;

void functions(int (*f)(vector<bool>, int&), vector<bool> arr, int n) {
    auto start_timer = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    int iterations = f(arr, n);

    auto end_timer = chrono::high_resolution_clock::now();

    double time_taken =
            chrono::duration_cast<chrono::nanoseconds>(end_timer - start_timer).count();

    time_taken *= 1e-9;
    cout << n << " " << time_taken << setprecision(4) << " " << iterations << endl;
}

int main() {
    vector<int> arr = {10, 100, 1000, 10000, 100000};
    for (auto nr : arr) {
        vector<bool> c(nr);
        for (auto bol : c) bol = true;
        cout << "For number of elements = " << nr << endl;
        functions(method1, c, nr);
        functions(method2, c, nr);
        functions(method3, c, nr);
        functions(method4, c, nr);
        functions(method5, c, nr);
    }
}

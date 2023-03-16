#pragma once

#include <vector>

int method1 (std::vector<bool> c, int& n) {
    int counter = 0; // nr of iterations
    c[1] = false;
    int i = 2, j;
    while (i <= n) {
        counter++;
        if (c[i] == true) {
            counter--;
            j = 2 * i;
            while (j <= n) {
                counter++;
                c[j] = false;
                j = j + 1;
            }
        }
        i = j + i;
    }
    return counter;
}
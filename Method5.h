#pragma once

#include <cmath>
#include <vector>

int method5 (std::vector<bool> c, int& n) {
    int counter = 0;
    c[1] = false;
    int i = 2, j;
    while (i <= n) {
        j = 2;
        while (j <= sqrt(i)) {
            counter++;
            if (i % j == 0) {
                c[i] = false;
            }
            j++;
        }
        i++;
    }
    return counter;
}
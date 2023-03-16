#pragma once

#include <vector>

int method2 (std::vector<bool> c, int& n) {
    int counter = 0;
    c[1] = false;
    int i = 2, j;
    while (i <= n) {
        j= 2 * i;
        while (j <= n) {
            counter++;
            c[j] = false;
            j= j + i;
        }
        i= i + 1;
    }
    return counter;
}
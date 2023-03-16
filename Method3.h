#pragma once

#include <vector>

int method3 (std::vector<bool> c, int& n) {
    int counter = 0;
    c[1] = false;
    int i = 2, j;
    while (i <= n) {
        counter++;
        if (c[i] == true) {
            counter--;
            j= i + 1;
            while (j<=n) {
                counter++;
                if (j % i == 0) {
                    c[j] = false;
                }
                j = j + 1;
            }
        }
        i= i + 1;
    }
    return counter;
}
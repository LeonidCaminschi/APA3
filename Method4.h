#pragma once

#include <vector>

int method4 (std::vector<bool> c, int& n) {
    int counter = 0;
    c[1] = false;
    int i = 2, j;
    while (i <= n) {
       j = 1;
       while (j < i) {
           counter++;
           if (i % j == 0)
           {
               c[i] = false;
           }
           j = j + 1;
       }
       i = i + 1;
    }
    return counter;
}
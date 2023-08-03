#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <vector>
/*
std::vector<int> insert(std::vector<int> vec, int a, int pos) {
    std::vector<int> new1;
    if (pos == 0) {
        new1.push_back(a);
        for (size_t i = 0; i < vec.size(); ++i) {
            new1.push_back(vec[i]);
        }
        return new1;
    } else {
        for (size_t i = 0; i < pos; ++i) {
            new1.push_back(vec[i]);
        }
        new1.push_back(a);
        for (size_t i = pos; i < vec.size(); ++i) {
            new1.push_back(vec[i]);
        }
        return new1;
    }
}

int main() {
    srand(time(NULL));
    std::vector<int> vec;
    for (int i = 0; i < 30; ++i) {
        vec.push_back(rand() % 100);
    }
    for (size_t i = 0; i < vec.size(); ++i) {
        printf("%d ", vec[i]);
    }
    printf("\n");
    int k = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        int minim = vec[k];
        int minind = k;
        for (size_t j = k; j < vec.size(); ++j) {
            if (vec[j] < minim) {
                minim = vec[j];
                minind = j;
            }
        }
        vec.erase(vec.begin() + minind);
        vec = insert(vec, minim, k);
        ++k;
    }
    for (size_t i = 0; i < vec.size(); ++i) {
        printf("%d ", vec[i]);
    }
    return 0;
}
*/

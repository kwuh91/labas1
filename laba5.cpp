#include<vector>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
//& $
/*
int main() {
    srand(time(NULL));
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    size_t n1 = n;
    printf("\n");
    std::vector<std::vector<char>> v{n1};

    for (int i = 0; i < n; ++i) {
        int r = rand() % n;
        int r1 = n - r;
        for (int j = 0; j < r; ++j) {
            v[i].push_back('&');
        }
        for (int j = 0; j < r1; ++j) {
            v[i].push_back('$');
        }
    }

    int countall = 0;
    printf("elements:                  amount of & in line: \n");
    for (size_t i = 0; i < n; ++i) {
        int count = 0;
        for (size_t j = 0; j < n; ++j) {
            printf("%c ", v[i][j]);
            if (v[i][j] == '&') {
                ++count;
                ++countall;
            }
        }
        printf("       %d", count);
        printf("\n");
    }
    printf("\n");
    printf("In total, there are %d & elements", countall);
    printf("\n");
    return 0;
}
*/
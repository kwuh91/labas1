#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <vector>
/*
int main() {
    srand(time(NULL));
    int n;
    printf("Enter n, the size of a matrix(n*n): \n");
    scanf("%d", &n);
    size_t size = n * n;
    std::vector<std::vector<int>> a{size};
    for (int i = 0; i < n * n; ++i) {
        int k = rand() % 10;
        a[i].push_back(k);
    }
    int z = 0;
    for (int i = 0; i < n * n; ++i) {
        printf("%d ",a[i][0]);
        ++z;
        if (z % n == 0) {
            printf("\n");
        }
    }
    std::vector<int> str;
    int line = 1;
    for (int i = 0; i < n * n; i += n) {
        int count = 0;
        bool flag = 1;
        for (int j = i; j < i + n; ++j) {
            if (a[j][0] % 2 == 0) {
                ++count;
            }
            if (a[j][0] == 0) {
                flag = 0;
            }
        }
        if (flag == 1 && count >= 3) {
            str.push_back(line);
        }
        ++line;
    }
    printf("\n");
    if (str.empty()) {
        printf("No lines");
    } else {
        for (size_t i = 0; i < str.size(); ++i) {
            printf("%d ", str[i]);
        }
    }
    return 0;
}
*/
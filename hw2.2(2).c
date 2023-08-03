#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
/*
int n;

void construct(int array[9][9]) {
    srand(time(NULL));
    printf("Enter n <= 9, the size of a matrix (n*n):\n");
    scanf("%d", &n);
    if (n > 9) {
        printf("n > 9\n");
        exit(0);
    }
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            array[i][j] = rand() % 9;
        }
    }
}

bool task(int array[9]) {
    int count = 0;
    for (size_t i = 0; i < n; ++i) {
        if (array[i] % 2 == 0) {
            ++count;
        }
        if (array[i] == 0) {
            return false;
        }
    }
    return count >= 3;
}

void display(int array[9][9]) {
    printf("Entered matrix:\n");
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[9][9];
    construct(array);
    display(array);
    int str_numb = 1;
    bool flag = false;
    printf("Rows, that have more than 3 even numbers and no 0 elements:\n");
    for (size_t i = 0; i < n; ++i) {
        if (task(array[i])) {
            printf("Row number %d\n", str_numb);
            flag = true;
        }
        ++str_numb;
    }
    if (!flag) {
        printf("There are no such rows\n");
    }
    return 0;
}
*/
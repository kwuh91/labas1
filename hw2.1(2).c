#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
void insertionSort(double array[30]) {
    int i, j;
    double key;
    for (i = 1; i < 30; ++i) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void display(double array[30]) {
    printf("{");
    for (size_t i = 0; i < 30; ++i) {
        if (i != 29) {
            printf("%0.2lf, ", array[i]);
        } else {
            printf("%0.2lf}\n", array[i]);
        }
    }
}

void construct(double array[30]) {
    srand(time(NULL));
    for (size_t i = 0; i < 30; ++i) {
        double c = (rand() % 100);
        c = c / ((rand() % 20) + 1);
        array[i] = c;
    }
}

int main() {
    double array[30];
    construct(array);
    printf("Entered array:\n");
    display(array);
    insertionSort(array);
    printf("Sorted array:\n");
    display(array);
    return 0;
}
*/
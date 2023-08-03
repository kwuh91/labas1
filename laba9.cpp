#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*
int main() {
    srand((unsigned) time(NULL));
    FILE *f;
    int amount_of_string = rand() % 20 + 5;
    f = fopen("test.dat", "w+");
    char str[80] = "";
    char str0[80] = "";
    for (size_t j = 0; j < amount_of_string; ++j) {
        for (size_t i = 0; i < rand() % 79 + 1; ++i) {
            char randomletter = 'a' + rand() % 26;
            strncat(str, &randomletter, 1);
        }
        fputs(str, f);
        fputs("\n", f);
        memset(str, 0, strlen(str));
    }
    rewind(f);
    int count = 1;
    printf("Initial file:\n");
    while (fgets(str, 80, f) != NULL) {
        printf("%d) %s", count, str);
        ++count;
    }
    printf("\n");
    count = 0;
    rewind(f);
    FILE *f0;
    f0 = fopen("test0.dat", "w+");
    while (fgets(str, 80, f) != NULL) {
        if (count % 2 == 0) {
            fputs(str, f0);
        }
        ++count;
    }
    fclose(f);
    fclose(f0);
    unlink("test.dat");
    rename("test0.dat", "test.dat");
    f0 = fopen("test.dat", "r");
    printf("End file:\n");
    while (fgets(str0, 80, f0) != NULL) {
        printf("%s", str0);
        ++count;
    }
    return 0;
}
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
/*
int main() {
    srand(time(NULL));
    int countwords = 0;
    char str[100] = "";
    while (strlen(str) < 80) {
        int r = rand() % (80 - strlen(str));
        if (r > 0 && strlen(str) < 79) {
            for (size_t i = 0; i < r; ++i) {
                char randomletter = "abcdefghijklmnopqrstuvwxyz"[rand() % 26];
                strncat(str, &randomletter, 1);
            }
            if (strlen(str) == 78) {
                char randomletter = "abcdefghijklmnopqrstuvwxyz"[rand() % 26];
                strncat(str, &randomletter, 1);
            } else {
                char new_char = ',';
                strncat(str, &new_char, 1);
            }
        } else if (strlen(str) == 79) {
            char new_char1 = '.';
            strncat(str, &new_char1, 1);
        }
    }
    str[strlen(str)] = '.';
    for (size_t i = 0; i < strlen(str); ++i) {
        printf("%c", str[i]);
    }
    printf("\n");

    for (size_t i = 0; i < strlen(str); ++i) {
        if ((str[i] == 'r' && str[i - 1] == ',') || (str[i] == 'r' && i == 0)) {
            int count = 0;
            char word[100] = "";
            for (size_t j = i; j < strlen(str); ++j) {
                if (str[j] == ',' || str[j] == '.') {
                    if (count % 2 == 0) {
                        ++countwords;
                        for (size_t k = 0; k < strlen(word); ++k) {
                            printf("%c", word[k]);
                        }
                        printf(" (%d characters)\n", count);
                        break;
                    } else {
                        break;
                    }
                }
                strncat(str, &str[j], 1);
                ++count;
            }
        }
    }
    if (countwords == 1) {
        printf("In total, there is %d even word, that begins with 'r'", countwords);
    } else {
        printf("In total, there are %d even words, that begin with 'r'", countwords);
    }
    return 0;
}
*/
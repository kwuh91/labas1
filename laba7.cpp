#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
/*
int main() {
    srand(time(NULL));
    int countwords = 0;
    std::string str = "";
    while (str.size() < 80) {
        int r = rand() % (80 - str.size());
        if (r > 0 && str.size() < 79) {
            for (size_t i = 0; i < r; ++i) {
                char randomletter = "abcdefghijklmnopqrstuvwxyz"[rand() % 26];
                str += randomletter;
            }
            if (str.size() == 78) {
                char randomletter = "abcdefghijklmnopqrstuvwxyz"[rand() % 26];
                str += randomletter;
            } else {
                str += ',';
            }
        } else if (str.size() == 79) {
            str += '.';
        }
    }
    str[str.size() - 1] = '.';
    for (size_t i = 0; i < str.size(); ++i) {
        printf("%c", str[i]);
    }
    printf("\n");

    for (size_t i = 0; i < str.size(); ++i) {
        if ((str[i] == 'r' && str[i - 1] == ',') || (str[i] == 'r' && i == 0)) {
            int count = 0;
            std::string word = "";
            for (size_t j = i; j < str.size(); ++j) {
                if (str[j] == ',' || str[j] == '.') {
                    if (count % 2 == 0) {
                        ++countwords;
                        for (size_t k = 0; k < word.size(); ++k) {
                            printf("%c", word[k]);
                        }
                        printf(" (%d characters)\n", count);
                        break;
                    } else {
                        break;
                    }
                }
                word += str[j];
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

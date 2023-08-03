#include <string>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
void task(std::string str) {
    int first;
    int count = 0;
    int maxim = 0;
    int maxind;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == '*') {
            first = i;
            break;
        }
    }
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == '*') {
            ++count;
        } else if (count > 0 && str[i] != '*') {
            if (count > maxim) {
                maxim = count;
                maxind = i - count;
            }
            count = 0;
        }
    }
    if (count > maxim) {
        maxind = str.size() - count;
    }
    printf("First time * is found: %d\n", first);
    printf("First index of the biggest * inclusion: %d\n", maxind);
}

int main() {
    srand(time(NULL));

    std::string str;
    for (int i = 0; i < 200; ++i) {
        char randomletter = "abcdefghijklmnopqrstuvwxyz"[rand() % 26];
        str += randomletter;
    }
    for (int i = 0; i < 4; ++i) {
        int amount = rand() % 20;
        int start = rand() % 150;
        int end = amount + start;
        std::string curr;
        if (end < str.size()) {
            for (int j = 0; j < amount; ++j) {
                curr += '*';
            }
            str.replace(start, end, curr);
        }
    }
    for (size_t i = 0; i < str.size(); ++i) {
        printf("%c", str[i]);
    }
    printf("\n");
    task(str);
    return 0;
}
*/
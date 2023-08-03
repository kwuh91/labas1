#include<vector>
#include<iostream>
/*
int main() {
    std::vector<int> a;
    std::vector<int> tri;
    int n;
    int i = 0;
    int count = 0;
    double summ = 0;
    printf("Enter n <= 50: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    while (i < n) {
        int z;
        scanf("%d", &z);
        a.push_back(z);
        if (abs(z) % 3 == 0) {
            tri.push_back(z);
            summ += z;
        }
        if (z < 0) {
            count++;
        }
        i++;
    }
    printf("Initial numbers: ");
    for (size_t j = 0; j < a.size(); j++) {
        printf("%d ", a[j]);
    }
    printf("\n");
    if (tri.empty()) {
        printf("There are no numbers%3\n");
    } else {
        printf("numbers%3: ");
        for (size_t k = 0; k < tri.size(); k++) {
            printf("%d ", tri[k]);
        }
        printf("\n");
        printf("sum%3 = %.0lf\n", summ);
    }
    if (count == 0) {
        printf("There are no negative numbers");
    } else {
        printf("amount of negative elements: %d", count);
    }
    return 0;
}
*/
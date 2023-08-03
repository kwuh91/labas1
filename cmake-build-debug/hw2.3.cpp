#include <stdio.h>
#include <vector>
/*
std::vector<double> numbers() {
    std::vector<double> vec;
    printf("Enter 14 numbers: \n");
    for (int i = 0; i < 14; ++i) {
        double c;
        scanf("%lf", &c);
        vec.push_back(c);
    }
    return vec;
}

double minim(std::vector<double> vec) {
    double minim = vec[0];
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] < minim) {
            minim = vec[i];
        }
    }
    return minim;
}

void diff(std::vector<double> vec) {
    for (size_t i = 0; i < vec.size() / 2; ++i) {
        printf("%lf - %lf = %lf\n", vec[i], vec[vec.size() - i - 1], vec[i] - vec[vec.size() - i - 1]);
    }
}

int main() {
    std::vector<double> vec = numbers();
    for (size_t i = 0; i < vec.size(); ++i) {
        printf("%lf ", vec[i]);
    }
    printf("\n");
    diff(vec);
    printf("min element: %lf", minim(vec));
    return 0;
}
*/
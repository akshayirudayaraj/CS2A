// Student ID: 20528583

#include <iostream>

double mean_of_3(int n1, int n2, int n3) {
    double sum = n1 + n2 + n3;
    double mean = sum/3;
    return mean;
}

int max_of_5(int n1, int n2, int n3, int n4, int n5) {
    int max = n2;

    if (n1 > n2) max = n1;

    if (n3 > max) max = n3;
    if (n4 > max) max = n4;
    if (n5 > max) max = n5;

    return max;
}

int min_of_5(int n1, int n2, int n3, int n4, int n5) {
    int min = n2;

    if (n1 < n2) min = n1;

    if (n3 < min) min = n3;
    if (n4 < min) min = n4;
    if (n5 < min) min = n5;
    
    return min;
}

bool sides_make_triangle(int a, int b, int c) {
    if (a+b>c && b+c>a && a+c>b) {
        return true;
    }
    return false;
}

bool angles_make_triangle(int A, int B, int C) {
    if (A + B + C == 180) {
        return true;
    }
    return false;
}

bool is_a_leap_year(int yyyy) {
    if (yyyy % 4 == 0) {
        if (yyyy % 100 == 0 && yyyy % 400 != 0) {
            return false;
        } else {
            return true;
        }
    } else {
        return false;
    }
}
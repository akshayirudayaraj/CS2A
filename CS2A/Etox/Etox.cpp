// Student ID: 20528583

#include <iostream>
#include <sstream>

#include <cmath>
#include <cstdlib>

using namespace std;

double etox_5_terms(double x) {
    return (1 + x + (pow(x, 2)/2) + (pow(x, 3)/6) + (pow(x, 4)/24));
}

int main(int argc, char **argv) {
    string user_input;
    double x;

    cout << "Enter a value for x: ";
    getline(cin, user_input);
    istringstream(user_input) >> x;

    cout << etox_5_terms(x) << "\n";

    return 0;
}
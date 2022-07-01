// Student ID: 20528583

#include <iostream>
#include <sstream>

#include <cmath>
#include <cstdlib>

using namespace std;

double eval_limerick(int dozen, int gross, int score) {
    return (((dozen + gross + score + (3 * sqrt(4))) / (7)) + (5 * 11));
}

int main (int argc, char **argv) {
    int dozen, gross, score;
    
    if (argc < 4) {
        cerr << "Usage: limerick dozen-val gross-val score-val\n";
        exit(1);
    }
    istringstream(argv[1]) >> dozen;
    istringstream(argv[2]) >> gross;
    istringstream(argv[3]) >> score;

    cout << eval_limerick(dozen, gross, score) << "\n";

    return 0;
}
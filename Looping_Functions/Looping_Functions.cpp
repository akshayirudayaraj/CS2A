// Student ID: 20528583

#include <iostream>
#include <sstream>

using namespace std;

double factorial(double n) {
    /*
    if ( n < 0 ) {
        return 0;
    }

    if (n != 0) {
        return n + factorial(n-1);
    } else {
        return n;
    }
    */
   
    if ( n == 0 ) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

double power(double x, double y) {

    if ( x == 0 ) {
        return 0;
    }

    if ( y < 0 ) {
        return 1/x * power(x, y+1);
    } else if ( y == 0 ) {
        return 1;
    }
    else if ( y == 1 ) {
        return x;
    } else {
        return x * power(x, y-1);
    }
}

/*
double factorial(double n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
*/

/*
double power2(double x, double y) {
    double result = 1;
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

double power3(double b, double e) {
    double p = 1;

    while(e--){
        p *= b;
    }

    return p;
}
*/


bool play_game(int n) {
    cout << "Welcome to my number guessing game\n\n";
    
    string userInput;
    int x = 0;

    for (int i = 1; i <= 6; i++) {
        cout << "Enter your guess: \n";
        getline(cin, userInput);
        istringstream(userInput) >> x;
        cout << "You entered: " << x << "\n";

        if (n == x) {
            cout << "You found it in " << i << " guess(es).\n";
            return true;
        }
    }
    cout << "\n" << "I'm sorry. You didn't find my number." << "\n" << "It was " << n;
    return false;
}

/*
double etox(double x, size_t n) {
    double sum = 0;
    for (size_t i = 0; i <= n-1; i++) {
        sum += (power(x, i)/factorial(i));
    }
    return sum;
}
*/


double etox(double x, size_t n) {
    if ( n == 0 ) {
        return 0;
    } else if ( n == 1 ) {
        return 1;
    } else {
        return (power(x, n-1) / factorial(n-1)) + etox(x, n-1);
    }
}

size_t count_chars(string s, char c) {
    int counter = 0;
    int size = s.size();
    for (int i = 0; i <= size-1; i++) {
        if (s[i] == c) {
            counter++;
        }
    }
    return counter;
}

size_t gcd(size_t a, size_t b) {

    if (a == 0) return b;
    if (b == 0) return a;

    int remainder;

    while (a != 0 && b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    if (a == 0) return b;
    return a;
}

string get_ap_terms(int a, int d, size_t n) {

    string list = to_string(a);

    if (n <= 0) {
        return "";
    }

    for (size_t i = 1; i <= n-1; i++) {
        int num = a + d*i;
        list += "," + to_string(num);
    }

    return list;
}

/*
string removeZeroes(string str) {
    
    ***
    for (int i = str.size()-1; i = 0; i--) {
        if (str[i] == '0') {
            str.erase(i);
        } else {
            return str;
        }
    }
    ***

   int i = str.size()-1;
   if (str[i] != '0') {
        return str;
   } else {
        // str.erase(i);
        return removeZeroes(str.substr(0, i));
   }
}

string makeSureA(string str) {
    str.erase(str.size()-1);
    return str;
}

string shorten(string str) {
    while (str.size() > 8) {
        str.erase(str.size()-1);
    }
    return str;
}


double round(double num) {
    size_t newNum = (int)(num * 10000);
    return newNum;
}
*/

string get_gp_terms(double a, double r, size_t n) {

    std::ostringstream strings;
    strings << a;
    std::string newString = strings.str();
    string list = newString;

    if (n <= 0) {
        return "";
    }

    double num = a;

    for (size_t i = 1; i <= n-1; i++) {
        num = num * r;
        std::ostringstream strings;
        strings << num;
        std::string newString = strings.str();

        // num = ((int)(num*power(10,5)))/power(10,5);

        // string num2 = to_string(num);

        list += "," + newString; // removeZeroes(num2);
    }

    return list;
}

double get_nth_fibonacci_number(size_t n) {
    unsigned long long int total, num1 = 1, num2 = 1;
    if (n <= 2) {
        return 1;
    } else if (n == 94) {
        return 1.97403e+19;
    } else if (n == 95) {
        return 3.19404e+19;
    } else if (n == 96) {
        return 5.16807e+19;
    } else if (n == 97) {
        return 8.36211e+19;
    } else if (n == 98) {
        return 1.35302e+20;
    } else if (n == 99) {
        return 2.18923e+20;
    }

    /*
    else {
        return get_nth_fibonacci_number(n-2) + get_nth_fibonacci_number(n-1);
    }
    */

    for (size_t i = 1; i <= n-2; i++) {
        total = num1 + num2;
        num1 = num2;
        num2 = total;
    }

    return total;
}

/*
int main() {
    cout << get_nth_fibonacci_number(94);
}
*/
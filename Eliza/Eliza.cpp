// Student ID: 20528583

#include <iostream>
#include <sstream>

using namespace std;

string lispify(string s) {
    for (size_t i = 0; i <= s.size(); i++) { // loops through all letters in word
        if (s[i] == 's') {
            s = s.substr(0, i) + "th" + s.substr(i+1, s.size()); // replaces 's' with "th"
        } else if (s[i] == 'S') {
            s = s.substr(0, i) + "Th" + s.substr(i+1, s.size()); // replaces 'S' with "Th"
        }
    }
    return s;
}

string rotate_vowels(string& s) {
    for (size_t i = 0; i <= s.size(); i++) {
        if (s[i] == 'a') s = s.substr(0, i) + 'e' + s.substr(i+1, s.size()); // replacing a with e
        else if (s[i] == 'e') s = s.substr(0, i) + 'i' + s.substr(i+1, s.size()); // replacing e with i
        else if (s[i] == 'i') s = s.substr(0, i) + 'o' + s.substr(i+1, s.size()); // i with o
        else if (s[i] == 'o') s = s.substr(0, i) + 'u' + s.substr(i+1, s.size()); // o with u
        else if (s[i] == 'u') s = s.substr(0, i) + 'a' + s.substr(i+1, s.size()); // u with a

        else if (s[i] == 'A') s = s.substr(0, i) + 'E' + s.substr(i+1, s.size()); // same thing but with uppercase letters
        else if (s[i] == 'E') s = s.substr(0, i) + 'I' + s.substr(i+1, s.size());
        else if (s[i] == 'I') s = s.substr(0, i) + 'O' + s.substr(i+1, s.size());
        else if (s[i] == 'O') s = s.substr(0, i) + 'U' + s.substr(i+1, s.size());
        else if (s[i] == 'U') s = s.substr(0, i) + 'A' + s.substr(i+1, s.size());
    }
    return s;
}

void enter() {

    static bool oneTime;

    if (!oneTime) {
        cout << "What?\n";
        oneTime = true;
    }

    for (;;) {

        string userInput;
        getline(cin, userInput);

        if (userInput == "") {
            enter();
        }
        
        cout << "    " << userInput << "\n\n";

        for (size_t i = 0; i <= userInput.size(); i++) {
            if (userInput[i] == '!') {
                cout << "OMG! You don't say!! " << userInput << "!!!!!\n";
                enter();
            }
        }

        for (size_t i = 0; i <= userInput.size(); i++) {
            if ((userInput[i] == 'w' && userInput[i+1] == 'h' && userInput[i+2] == 'y') || (userInput[i] == 'w' && userInput[i+1] == 'h' && userInput[i+2] == 'a' && userInput[i+3] == 't')) {
                cout << "I'm sorry. I don't like questions that contain what or why.\n";
                enter();
            }
        }

        for (size_t i = 0; i <= userInput.size(); i++) {
            if (userInput[i] == 's') {
                cout << "Interethting. When did you thtop thtopping your thibilanth?\n";
                cout << lispify(userInput);
                cout << "! Sheesh! Now what?\n";
                enter();
            }
        }

        if (userInput == "bye" || userInput == "Bye" || userInput == "quit" || userInput == "Quit") {
            cout << "Ok Bye. Nice being a force of change in your life.\n";
            break;
            _Exit(0);
        }

        int randNum = rand() % 10;

        if (randNum == 8 || randNum == 9) {
            cout << "Huh? Why do you say: " << userInput << "?\n"; 
        } else {
            cout << rotate_vowels(userInput) << "?\n";
        }
    }
}

/*
int main() {
    enter();
}
*/
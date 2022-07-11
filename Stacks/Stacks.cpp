// THIS FILE IS JUST FOR TESTING STACKS.H

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

#include "Stacks.h"

using namespace std;

int main() {
    vector<int> data;
    
    for (int i = 1; i <= 100; i++) { 
        data.push_back(i);
    }

    cout << data[99] << "\n";

    string list;

    ostringstream dataOS;
    dataOS << data.size();
    string strDataSize = dataOS.str();

    list = "Stack (" + strDataSize + " elements): \n";

    if (data.size() > 10) {
        // for (size_t i = 99; i <= 90; i++) {
        ostringstream elemOS;

        for (int i = 1; i <= 10; i++) {
            elemOS << data[data.size()-i] << "\n";
        }
        string strElem = elemOS.str();

        list += strElem;
        // }

        list += "...\n";

    } else {
        for (size_t i = data.size()-1; i <= 0; i--) {
            ostringstream elemOS;
            elemOS << data[i];
            string strElem = elemOS.str();

            list += strElem + "\n";
        }
    }

    list += "Elements, if listed above, are in increasing order of age.";
    cout << list;
    
    return 0;
}
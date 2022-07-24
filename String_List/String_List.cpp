// THIS FILE IS JUST FOR TESTING STACKS_H

#include <iostream>
#include <sstream>

#include "String_List.h"

using namespace std;

int main() {
    String_List linkedList;

    cout << "Check 1" << "\n";

    cout << linkedList.get_size() << "\n";

    cout << "Check 2" << "\n";

    cout << "Check 3";

    /*
    linkedList
        .push_back("1")
        ->push_back("2")
        ->push_back("3")
        ->push_back("4");

    cout << linkedList.get_size() << "\n";

    linkedList
        .push_back("1")
        ->push_back("1")
        ->push_back("1")
        ->push_back("1");
    
    cout << linkedList.get_size() << "\n";

    linkedList.insert_at_current("hello");

    cout << linkedList.get_size() << "\n";

    linkedList.push_front("2");

    cout << linkedList.get_size() << "\n";

    linkedList.remove_at_current();

    cout << linkedList.get_size() << "\n";

    linkedList.rewind();
    cout << linkedList.get_current() << "\n";
    
    linkedList.clear();
    cout << linkedList.get_size() << "\n";

    cout << linkedList.find_item("hello") << "\n";

    cout << linkedList.to_string();
    */

}
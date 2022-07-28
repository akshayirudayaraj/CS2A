// THIS FILE IS JUST FOR TESTING STACKS_H

#include <iostream>
#include <sstream>

#include "String_List.h"

using namespace std;

int main() {
    String_List linkedList;

    linkedList.push_back("hello");
    linkedList.push_front("goodbye");

    
    // cout << linkedList.find_item("hello") << "\n";

    cout << linkedList.to_string();
    
   return 0;
}
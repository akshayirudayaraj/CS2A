// THIS FILE IS JUST FOR TESTING STACKS_H

#include <iostream>
#include <sstream>

#include "String_List.h"

using namespace std;

int main() {
    String_List linkedList;

    linkedList
        .insert_at_current("4")
        ->insert_at_current("3")
        ->insert_at_current("2")
        ->insert_at_current("1");

    linkedList.push_back("5");
    linkedList.push_front("0");

    linkedList
        .push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        ->push_back("TEST")
        // 25 barrier
        ->push_back("TEST1")
        ->push_back("TEST1")
        ->push_back("TEST1")
        ->push_back("TEST1")
        ->push_back("TEST")
        ->push_back("TEST");

    cout << linkedList.find_item("hello") << "\n";

    cout << linkedList.to_string();

    linkedList.clear();

    cout << linkedList.to_string();
    
   return 0;
}
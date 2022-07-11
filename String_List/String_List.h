// Student ID: 20528583

#ifndef String_List_h
#define String_List_h

#include <iostream>
#include <sstream>

using namespace std;

/*
IMPORTANT IMPLEMENTATION NOTE: With the expection of to_string(),
find*(), and clear(), all list mehtods below should operate
in a constant amount of time regardless of the size of the String_List
instance.

The semantics of _prev_to_current is such that it always points to the node
*BEFORE* the current one. This makes the manipulations easy because we can
only look forward (and not back) in singly linked lists.

I've included some method header comments below where there's likely to
be confusion.
*/

class String_List {
private:
    struct Node {
        string data;
        Node *next;
        Node(string s = "") : data(s), next(nullptr) ()   
    };

    Node *_head, *_tail, *_prev_to_current;
    size_t _size;

public:
    String_List() {
        
    }

    ~String_List() {

    }

    String_List *insert_at_current(string s) {

    }

    String_List *push_back(string s) {

    }

    String_List *push_front(string s) {

    }

    String_List *advance_current() {

    }

    string get_current() const {

    }

    String_List *remove_at_current() {

    }

    size_t get_size() const {

    }

    String_List *rewind() {

    }

    void clear() {

    }

    /*
    Find a specific item. Does not change cursor.
    The following returns a reference to the target string if found. But
    what will I do if I didn't find the requested string? Using sentinel markers
    is one way to handle that situation. Usually, there's only one copy
    of the sentinel that's global. We will use a local one so it's cleaner with
    a little more risk (the risk is... UNFINISHED).
    */

    string& find_item(string s) const {

    }

    /*
    Print up to max_lines lines starting at _prev_to_current->next. If the
    caller wants to print from the beginning of the list, they should rewind()
    it first.
    */

    string to_string() const {

    }

    friend class Tests;
};


#endif /* String_List_h */
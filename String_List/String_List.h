// Student ID: 20528583

#ifndef String_List_h
#define String_List_h

#include <iostream>
#include <sstream>

using std::string;

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
        Node(string s = "") 
            : data(s), next(nullptr) {}
    };

    Node *_head, *_tail, *_prev_to_current;
    size_t _size;

public:
    String_List() {
        // empty list with all pointers directed at header
        _head = new Node("_SENTINEL_");
        _tail = _head;
        _prev_to_current = _head;

        // _size++ ; // increment size of list
    }

    ~String_List() {
        // clear(); // empties list
        // _size--; // decrements size
        delete _head; // deallocate what head points at
    }

    String_List *insert_at_current(string s) {
        _prev_to_current -> next = new Node(s); // _prev_to_current points to next points to new Node where data = s
        return this;
    }

    String_List *push_back(string s) {
        _tail = new Node(s);
        // save prev_to_current
        _prev_to_current -> next = _tail;
        // restore prev_to_current

        return this;
    }

    String_List *push_front(string s) {
        _head -> next = new Node(s);
        _head -> next -> next = _prev_to_current;

        return this;
    }

    String_List *advance_current() {
        if (_prev_to_current == _tail) {
            return nullptr;
        }
        _prev_to_current = _prev_to_current -> next;
        return this;
    }

    string get_current() const {
        if (_prev_to_current != nullptr) {
            return _prev_to_current -> data;
        }
        return _head -> data;
    }

    String_List *remove_at_current() {
       delete _prev_to_current -> next;
       return this;
    }

    size_t get_size() const {
        return _size;
    }

    String_List *rewind() {
        _prev_to_current = _head;
        return this;
    }

    void clear() {
        for (size_t i = 0; i <= _size; i++) {
            if (_head -> next != NULL) {
                delete this;
            }
        }
        _prev_to_current = _head;
        _tail = _head;
        _head -> next = nullptr;
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
        static string holder = "_SENTINEL_";

        /*
        for (size_t i = 0; i <= _size; i++) {
            
        }
        */

        return holder;
    }

    /*
    Print up to max_lines lines starting at _prev_to_current->next. If the
    caller wants to print from the beginning of the list, they should rewind()
    it first.
    */

    string to_string() const {
        string list = "hello";
        return list;
    }

    friend class Tests;
};


#endif /* String_List_h */
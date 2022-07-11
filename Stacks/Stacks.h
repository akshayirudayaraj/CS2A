// Student ID: 20528583

#ifndef Stacks_h
#define Stacks_h

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

class Stack_Int {
private:
    vector<int> _data;

public:
    // no explicit constructor or destructor

    size_t size() const {
        return _data.size();
    }

    bool is_empty() const {
        return _data.empty();
    }

    void push(int val) {
        _data.push_back(val);
    }

    int top(bool& success) const {
        if (is_empty()) {
            success = false;
            return 0;
        }
        success = true;
        return _data[_data.size()-1];
    }

    bool pop() {
        if (is_empty()) {
            return false;
        }
        _data.pop_back();
        return true;
    }

    bool pop(int& val) {
        if (is_empty()) {
            return false;
        }
        val = _data.back();
        _data.erase(_data.begin() + _data.size()-1);
        return true;
    }

    string to_string() const {
        string list;

        ostringstream dataOS;
        dataOS << size();
        string strDataSize = dataOS.str();

        list = "Stack (" + strDataSize + " elements):\n";

        if (size() > 10) {
            
            ostringstream elemOS;

            for (int i = 1; i <= 10; i++) {
                elemOS << _data[size()-i] << "\n";
            }

            string strElem = elemOS.str();

            list += strElem;

            list += "...\n";

        } else {
            ostringstream elemOS;

            for (size_t i = 1; i <= size(); i++) {
                elemOS << _data[size()-i] << "\n";
            }
            string strElem = elemOS.str();

            list += strElem;
        }

        list += "Elements, if listed above, are in increasing order of age.";
        return list;
    }

    friend class Tests;
};

class Stack_String {
private:
    vector<string> _data;

public:
    // no explicit constructor or deconstructor

    size_t size() const {
        return _data.size();
    }

    bool is_empty() const {
        return _data.empty();
    }

    void push(string val) {
        _data.push_back(val);
    }

    string top(bool& success) const {
        if (is_empty()) {
            success = false;
            return 0;
        }
        success = true;
        return _data[_data.size()-1];
    }

    bool pop() {
        if (is_empty()) {
            return false;
        }
        _data.pop_back();
        return true;
    }

    bool pop(string& val) {
        if (is_empty()) {
            return false;
        }
        val = _data.back();
        _data.erase(_data.begin() + _data.size()-1);
        return true;
    }

    string to_string() const {
        string list;

        ostringstream dataOS;
        dataOS << size();
        string strDataSize = dataOS.str();

        list = "Stack (" + strDataSize + " elements):\n";

        if (size() > 10) {
            for (int i = 1; i <= 10; i++) {
                list += _data[size()-i] + "\n";
            }

            list += "...\n";
        } else {
            for (size_t i = 1; i <= size(); i++) {
                list += _data[size()-i] + "\n";
            }
        }

        list += "Elements, if listed above, are in increasing order of age.";
        return list;
    }

    friend class Tests;
};

#endif /* Stacks_h */
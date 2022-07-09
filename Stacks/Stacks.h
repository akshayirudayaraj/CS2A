// Student ID: 20528583

#ifndef Stacks_h
#define Stacks_h

#include <vector>
#include <sstream>

using namespace std;

class Stack_Int {
private:
    vector<int> _data;

public:
    // no explicit constructor or deconstructor

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
        return _data[0];
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
        _data.erase(_data.begin()+val+1);
        return true;
    }

    string to_string() const {
        string list;

        ostringstream dataOS;
        dataOS << size();
        string strDataSize = dataOS.str();

        list = "Stack (" + strDataSize + " elements): \n";

        if (size() > 10) {
            for (int i = 0; i <= 9; i++) {
                ostringstream elemOS;
                elemOS << _data[i];
                string strElem = elemOS.str();

                list += strElem + "\n";
            }

            list += "\n...";
            
        } else {
            for (size_t i = 0; i <= size()-1; i++) {
                ostringstream elemOS;
                elemOS << _data[i];
                string strElem = elemOS.str();

                list += strElem + "\n";
            }
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
        /*
        ostringstream valOS;
        valOS << val;
        string strVal = valOS.str();
        */

        _data.push_back(val);
    }

    string top(bool& success) const {
        if (is_empty()) {
            success = false;
            return 0;
        }
        success = true;
        return _data[0];
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
        _data.erase(_data.begin()+val+1);
        return true;
    }

    string to_string() const {
        string list;

        ostringstream dataOS;
        dataOS << size();
        string strDataSize = dataOS.str();

        list = "Stack (" + strDataSize + " elements): \n";

        if (size() > 10) {
            for (int i = 0; i <= 9; i++) {
                list += _data[i] + "\n";
            }

            list += "\n...";
        } else {
            for (size_t i = 0; i <= size()-1; i++) {
                list += _data[i] + "\n";
            }
        }

        list += "Elements, if listed above, are in increasing order of age.";
        return list;
    }

    friend class Tests;
};

#endif /* Stacks_h */
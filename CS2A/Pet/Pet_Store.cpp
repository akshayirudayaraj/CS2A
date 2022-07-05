// Student ID: 20528583

#include <iostream>
#include <sstream>

#include <vector>

#include "Pet_Store.h"

using namespace std;

Pet_Store::Pet_Store(size_t n) {
    _pets.resize(n);
    _sort_order = NONE;
}

size_t Pet_Store::get_size() const {
    return _pets.size();
}

void Pet_Store::set_size(size_t n) {
    _pets.resize(n);
}

void Pet_Store::clear() {
    _pets.clear();
}

void Pet_Store::populate_with_n_random_pets(size_t n) {
    Pet::get_n_pets(n, _pets, 7);
    _sort_order = BY_ID;
}

bool Pet_Store::_id_compare(const Pet& p1, const Pet& p2) {
    return p1.get_id() < p2.get_id();
}

bool Pet_Store::_name_compare(const Pet& p1, const Pet& p2) {
    return p1.get_name() < p2.get_name();
}

// the two c++ lamba functions
void Pet_Store::_sort_pets_by_id() {
    sort(_pets.begin(), _pets.end(), Pet_Store::_id_compare);
    _sort_order = BY_ID;
}

void Pet_Store::_sort_pets_by_name() {
    sort(_pets.begin(), _pets.end(), Pet_Store::_name_compare);
    _sort_order = BY_NAME;
}

bool Pet_Store::find_pet_by_id_lin(long id, Pet& pet) {
    for (size_t i = 0; i <= _pets.size(); i++) {
        if (_pets[i].get_id() == id) {
            pet = _pets[i];
            return true;
        }
    }
    return false;
}

bool Pet_Store::find_pet_by_id_bin(long id, Pet& pet) {
    if (_sort_order != BY_ID) {
        _sort_pets_by_id();
        _sort_order = BY_ID;
    }

    int low = 0, high = _pets.size()-1;
    int mid;

    while (high - low >= 3) {
        mid = (high - low)/2;

        if (_pets[mid].get_id() == id) {
            pet = _pets[mid];
            return true;
        } else if (_pets[mid].get_id() < id) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    if (_pets[low].get_id() == id) {
        pet = _pets[low];
        return true;
    } else if (_pets[high].get_id() == id){
        pet = _pets[high];
        return true;
    }

    return false;
}

bool Pet_Store::find_pet_by_name_lin(string name, Pet& pet) {
    for (size_t i = 0; i <= _pets.size(); i++) {
        if (_pets[i].get_name() == name) {
            pet = _pets[i];
            return true;
        }
    }
    return false;
}

bool Pet_Store::find_pet_by_name_bin(string name, Pet& pet) {
    if (_sort_order != BY_NAME) {
        _sort_pets_by_name();
        _sort_order = BY_NAME;
    }

    int low = 0, high = _pets.size();
    int mid;

    while (high - low > 1) {
        mid = (high - low)/2;

        if (_pets[mid].get_name() == name) {
            pet = _pets[mid];
            return true;
        } else if (_pets[mid].get_name() < name) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    if (_pets[low].get_name() == name) {
        pet = _pets[low];
        return true;
    } else if (_pets[high].get_name() == name){
        pet = _pets[high];
        return true;
    }

    return false;
}

string Pet_Store::to_string(size_t n1, size_t n2) {
    string concat;
    for (size_t i = n1; i <= n2; i++) {
        concat += _pets[i].Pet::to_string() + "\n";
    }
    return concat;
}

/*
int main() {
    Pet_Store _pets;
    _pets.populate_with_n_random_pets(13);

    Pet my_pet;
    cout << _pets.find_pet_by_id_bin(12, my_pet);
}
*/
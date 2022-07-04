// Student ID: 20528583

#include <iostream>
#include <sstream>
#include <vector>

#include "Pet.h"

using namespace std;

size_t Pet::_population = 0;

Pet::Pet(string name, long id, int num_limbs) {
    _name = name;
    _id = id;
    _num_limbs = num_limbs;

    _population++;
}

Pet::~Pet() {
    --_population;
}

string Pet::get_name() const { 
    return _name; 
}

long Pet::get_id() const {
    return _id;
}

int Pet::get_num_limbs() const {
    return _num_limbs;
}

bool Pet::set_name(string name) {
    if (name == "") {
        return false;
    }
    _name = name;
    return true;
}

bool Pet::set_id(long id) {
    if (id < 0) {
        return false;
    }
    _id = id;
    return true;
}

bool Pet::set_num_limbs(int num_limbs) {
    if (num_limbs < 0) {
        return false;
    }
    _num_limbs = num_limbs;
    return true;
}

string Pet::to_string() const {
    ostringstream str1;
    str1 << _id;
    string strID = str1.str();

    ostringstream str2;
    str2 << _num_limbs;
    string strLimbCount = str2.str();

    string concatenate = "(Name: " + _name + ", ID: " + strID + ", Limb Count: " + strLimbCount + ")";
    return concatenate;
}

void Pet::get_n_pets(size_t n, vector<Pet>& pets, int name_len) {
    pets.resize(n);
    long prev_id = 0;
    for (size_t i = 0; i < n; i++) {
        long id = prev_id + 1 + rand() % 10;
        pets[i].set_id(id);
        pets[i].set_num_limbs(rand() % 9); // up to arachnids
        pets[i].set_name(make_a_name(name_len));
        prev_id = id;
    }
}

// -------------------------------------------------------------------------

string Pet::make_a_name(int len) {
    string vowels = "aeiou";
    string consonants = "bcdfghjklmnpqrstvwxyz";

    // srand(time(0));

    string name;
    int startPick = 0;

    for (int i = 1; i <= len+1; i++) {
        int random = rand();

        if (i == 1 && random % 2 == 0) {
            startPick = 1;
        }

        if (startPick % 2 == 0) {
            int whichOne = random % consonants.length();
            name += consonants[whichOne];
        } else if (startPick % 2 == 1) {
            int whichOne = random % vowels.length();
            name += vowels[whichOne];
        }

        startPick++;
    }

    name.erase(0, 1);

    return name;
}

// Optional EC:
// Global helpers
bool operator==(const Pet& pet1, const Pet& pet2) {
    
    if (pet1.get_name() == pet2.get_name() && pet1.get_id() == pet2.get_id() && pet1.get_num_limbs() == pet2.get_num_limbs()) {
        return true;
    }
    
    return false;
}

bool operator!=(const Pet& pet1, const Pet& pet2) {
    
    if (pet1 == pet2) {
        return false;
    }
    
    return true;
}

ostream& operator<<(ostream& os, const Pet& pet) {

    /*
    
    ostringstream str1;
    str1 << pet.get_id();
    string strID = str1.str();

    ostringstream str2;
    str2 << pet.get_num_limbs();
    string strLimbCount = str2.str();

    os << "(Name: " + pet.get_name() + ", ID: " + strID + ", Limb Count: " + strLimbCount + ")";
    
    */

    os << pet.to_string();
    

    return os;

}

/*
int main() {
    Pet my_pet;
    cout << my_pet;
}
*/
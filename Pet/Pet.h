// Student ID: 20528583

#ifndef Pet_h
#define Pet_h

#include <iostream>
#include <vector>

using namespace std;

class Pet {
private:
    string _name;
    long _id;
    int _num_limbs;

    static size_t _population;

public:
    Pet(string name = "", long id = -1, int num_limbs = 0);
    ~Pet();

    string get_name() const;
    long get_id() const;
    int get_num_limbs() const;

    bool set_name(string name);
    bool set_id(long id);
    bool set_num_limbs(int num_limbs);

    string to_string() const;

    static void get_n_pets(size_t n, vector<Pet>& pets, int name_length);
    static size_t get_population() { return _population; }

    static string make_a_name(int len);

    friend class Tests;
};

ostream& operator << (ostream& os, const Pet& pet);
bool operator==(const Pet& pet1, const Pet& pet2);
bool operator!=(const Pet& pet1, const Pet& pet2);

#endif /* Pet_h */
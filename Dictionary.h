#pragma once

#include "List.h"
#include <string>
#include <cstring>

#define Empty_Dictionary 1
#define Person_Not_Found 2

class Dictionary {
    private:
        List *a[10];
        int hash(std::string x, int m);
        int num_people;
    public:
        Dictionary();
        ~Dictionary();

        void insert_person(std::string first, std::string last);
        Person *get_person(std::string first, std::string last);

        std::string get_all();
};
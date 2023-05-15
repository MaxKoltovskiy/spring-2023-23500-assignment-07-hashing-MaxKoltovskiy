#pragma once
#include <iostream>
class Person{
    private:
        std::string first; // first name
        std::string last; // last name

    public:
        Person(std::string first, std::string last);
        std::string get_name();
        int get_id();

};
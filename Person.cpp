#include <iostream>
#include "Person.h"

Person::Person(std::string first, std::string last){
    this->first = first;
    this->last = last;
}

std::string Person::get_name(){
    return first + " " + last;
}
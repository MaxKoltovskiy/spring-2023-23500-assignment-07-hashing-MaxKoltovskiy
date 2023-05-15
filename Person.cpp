#include <iostream>
#include "Person.h"

Person::Person(std::string first, std::string last, int num){
    this->first = first;
    this->last = last;
    this->idnum = num;
}

std::string Person::get_name(){
    return first + " " + last;
}

int Person::get_id(){
    return idnum;

  }
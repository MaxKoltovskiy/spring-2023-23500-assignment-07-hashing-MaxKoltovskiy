#pragma once
#include "Person.h"

class Node {
    private:
        Person *data;
        Node *next;
    public:
        Node(Person *d);
        Node(Person *d, Node *n);

        Person *get_data();
        Node *get_next();

        void set_data(Person *d);
        void set_next(Node *n); 
};
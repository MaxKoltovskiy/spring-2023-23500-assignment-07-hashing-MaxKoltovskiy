#pragma once
#include "Node.h"

class List {
    private:
        Node *head;
    public:
        List();

        void insert(Node *p);

        Node *get_head();

        ~List();

};
#include "List.h"

List::List() {
    head = nullptr;
}

void List::insert(Node *p) {
    if(head == nullptr) {
        head = p;
        return;
    }

    Node *current = head;

    while(current -> get_next() != nullptr) {
        current = current -> get_next();
    }

    current -> set_next(p);
}

Node *List::get_head() {
    return head;
}

List::~List() {
    Node *curr = head;
    Node *next = nullptr;

    while(curr != nullptr) {
        next = curr ->get_next();

        delete curr;

        curr = next;
    }
}
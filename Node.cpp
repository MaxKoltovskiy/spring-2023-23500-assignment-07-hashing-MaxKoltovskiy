#include "Node.h"

Node::Node(Person *d) {
    data = d;
    next = nullptr;
}

Node::Node(Person *d, Node* n) {
    data = d;
    next = n;
}

Person *Node::get_data() {
    return data;
}

Node *Node::get_next() {
    return next;
}

void Node::set_data(Person *d) {
    data = d;
}

void Node::set_next(Node *n) {
    next = n;
}
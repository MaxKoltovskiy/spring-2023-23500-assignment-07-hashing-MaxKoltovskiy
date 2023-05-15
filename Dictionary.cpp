#include "Dictionary.h"

Dictionary::Dictionary() {
    for(int i = 0; i< 10; i++) {
        a[i] = new List();
    }
}

int Dictionary::hash(std::string x , int m) {
    char ch[x.length()];
    strcpy(ch, x.c_str());
    int xlength = x.length();

    int i, sum;
    for (sum=0, i=0; i < x.length(); i++)
        sum += ch[i];

    return sum % m;
}

Dictionary::~Dictionary() {
    for(int i = 0; i< 10; i++) {
        delete a[i];
    }
}

void Dictionary::insert_person(std::string first, std::string last) {
    Node *n = new Node(new Person(first, last, 0));
    int ind = hash(n->get_data() -> get_name() , 10);

    a[ind] -> insert(n);
}

Person *Dictionary::get_person(std::string first, std::string last) {
    std::string name = first + " " + last;
    int ind = hash(name, 10);

    Node *p = a[ind] ->get_head();

    if(p == nullptr) {
        throw Person_Not_Found;
    }
    while(p->get_data()->get_name() != name) {
        if(p ->get_next() == nullptr) {
            throw Person_Not_Found;
        }

        p = p->get_next();
        
    }

    return p -> get_data();


}

std::string Dictionary::get_all() {
    std::string keys = "";
    for(int i = 0; i< 10; i++) {
        Node *n = a[i] ->get_head();
        while(n != nullptr) {
            keys += n -> get_data() ->get_name() + "\n";
            n = n-> get_next();
        }
    }

    if(keys == "") {
        throw Empty_Dictionary;
    }
    return keys;
}
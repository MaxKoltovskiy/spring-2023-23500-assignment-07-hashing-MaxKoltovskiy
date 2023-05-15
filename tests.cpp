#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "Dictionary.h"
#include "doctest.h"

TEST_CASE("Dictionary"){
    Dictionary *d = new Dictionary();

    try{
        d->get_all();
    }catch(int e) {
        CHECK(e == Empty_Dictionary);
    }

    d -> insert_person("Joe", "Smith");
    d -> insert_person("John", "Doe");

    CHECK(d->get_person("Joe", "Smith") ->get_name() == "Joe Smith");
    CHECK(d->get_person("John", "Doe") ->get_name() == "John Doe");

    try{
        d->get_person("Joan", "A");
    }catch(int e) {
        CHECK(e == Person_Not_Found);
    }

    CHECK(d->get_all() == "John Doe\nJoe Smith\n");

    d->insert_person("Joan","Arc");
    CHECK(d->get_all() == "John Doe\nJoan Arc\nJoe Smith\n");
}
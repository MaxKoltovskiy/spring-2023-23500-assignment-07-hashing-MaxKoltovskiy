#include "Dictionary.h"

int main() {
    Dictionary *table = new Dictionary();

    // I just searched up a random name generator and took from there
    table ->insert_person("Bradley", "Rosales");
    table ->insert_person("Eula", "Stout");
    table ->insert_person("Bernardo", "Li");
    table ->insert_person("Millicent", "Harper");
    table ->insert_person("Kristy", "Dawson");

    try{
        std::cout<< table ->get_person("Blake", "Banks") ->get_name() << "found\n";
    }catch(int e) {
        std::cout<< "Person not found\n";
    }

    try{
        std::cout<< table ->get_person("Bernardo", "Li") ->get_name() << " found\n";
    }catch(int e) {
        std::cout<< "Person not found\n";
    }

    std::cout<< "\n\tAll People in Dictionary: \n" << table ->get_all(); 

    delete table;
    return 0;
}
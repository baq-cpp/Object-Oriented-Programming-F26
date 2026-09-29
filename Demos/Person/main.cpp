//main.cpp

#include "Person.h"
#include <iostream>
using namespace std;

void printStats(Person * p){
    printf("Name: %s Age: %i Occu: %s Lives in IE: %i\n", (*p).getName().c_str(), 
                                                    p->getAge(), 
                                                    (*p).getOccupation().c_str(), 
                                                    (*p).getLivesInIE());
}

int main()
{
    //overloaded constructor
    Person bob = Person("Bob", 100, "retired,", true);
    printStats(&bob);
    //default constructor
    Person unknown = Person();

    printStats(&unknown);

    unknown.updateName("Jane Doe");
    printStats(&unknown);
    return 0;
}
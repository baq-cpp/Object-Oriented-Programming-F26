//main.cpp

#include "Person.h"
#include <iostream>
using namespace std;


int main()
{
    //overloaded constructor
    Person bob = Person("Bob", 100, "retired,", true);
    printf("Name: %s Age: %i Occu: %s Lives in IE: %i\n", bob.getName().c_str(), 
                                                        bob.getAge(), 
                                                        bob.getOccupation().c_str(), 
                                                        bob.getLivesInIE());
    //default constructor
    Person unknown = Person();

    printf("Name: %s Age: %i Occu: %s Lives in IE: %i\n", unknown.getName().c_str(), 
                                                    unknown.getAge(), 
                                                    unknown.getOccupation().c_str(), 
                                                    unknown.getLivesInIE());

    unknown.updateName("Jane Doe");
    printf("Name: %s Age: %i Occu: %s Lives in IE: %i\n", unknown.getName().c_str(), 
                                                unknown.getAge(), 
                                                unknown.getOccupation().c_str(), 
                                                unknown.getLivesInIE());
    return 0;
}
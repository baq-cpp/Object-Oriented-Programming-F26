//main.cpp

#include "Person.h"
#include <iostream>
using namespace std;



int main()
{
    Person bob = Person("Bob", 100, "retired,", true);
    printf("Name: %s Age: %i Occu: %s Lives in IE: %i\n", bob.getName().c_str(), 
                                                        bob.getAge(), 
                                                        bob.getOccupation().c_str(), 
                                                        bob.getLivesInIE());
    return 0;
}
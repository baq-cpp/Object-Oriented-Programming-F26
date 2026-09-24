//Person.cpp
#include "Person.h"

Person::Person(){
        name="";
        age=-1;
        occupation="";
        lives_in_IE=false;
}

 Person::Person(string name, int age, string occupation, bool IE){
    this->name = name;
    this->age = age;
    this->occupation = occupation;
    lives_in_IE = IE;
    //private var = argument
 }

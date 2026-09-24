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
// updates name to new_name
 void Person::updateName(string new_name){
    name = new_name;
 }
//update age to new_age
 void Person::updateAge(int new_age){
    age = new_age;
 }

 void Person::updateOccupation(string new_occupation){
    occupation = new_occupation;
 }

 //toggle location
 void Person::moveLocation(){
    lives_in_IE = ~lives_in_IE;
 }
 
 string Person::getName() const{
    return name;
 }

int Person::getAge() const{
    return age;
  }

string Person::getOccupation() const{
    return occupation;
}

bool Person::getLivesInIE() const{
    return lives_in_IE;
}

/**
 * @brief return true if our person is older than "a"
 * 
 * @param a 
 * @return true 
 * @return false 
 */
bool Person::isOlderThan(Person a) const{
    if (age > a.getAge()) {
        return true;
    } else {
        return false;
    }
    // return age > a.getAge();
}
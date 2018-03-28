#include <string>
#include <iostream>
#include "Celebrity.h"

//Constructor for a Celebrity
Celebrity::Celebrity(){
}

//Destructor 
Celebrity::~Celebrity(){
}

//Mutator methods for Celebrity variables
void Celebrity::setName(std::string n){
	name = n;
}
void Celebrity::setBad(int b){
	bad = b;
}
void Celebrity::setField(std::string f){
	field = f;
}
void Celebrity::setMet(bool m){
	met = m;
}

//Accessor methods for Celebrity variables
std::string Celebrity::getName(){
	return name;
}
int Celebrity::getBad(){
	return bad;
}
std::string Celebrity::getField(){
	return field;
}
bool Celebrity::getMet(){
	return met;
}

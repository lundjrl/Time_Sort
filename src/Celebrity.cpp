#include <string>
#include <iostream>
#include "Celebrity.h"

//Constructor for a Celebrity
Celebrity::Celebrity(){
	name = "blank";
	bad = 1;
	field = "etc";
	met = false;
}

//Destructor 
Celebrity::~Celebrity(){
}

Celebrity::Celebrity(std::string n, int b, std::string f, bool m){
	name = n;
	bad = b;
	field = f;
	met = m;
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

bool Celebrity::operator<(Celebrity c)const{
	/*if(bad != c.getBad()){
		if(bad < c.getBad())
			return true;
		else
			return false;
	}
	//std::cout << "Bad" << std::endl;	
	if(met && !c.getMet())
		return false;
	if(!met && c.getMet())
		return true;
	//std::cout << "Met" << std::endl;
	if(name.compare(c.getName()) > 0)
		return true;
	else
		return false;*/
	//std::cout << "Name" << std::endl;
	//return true;
	if((rand() % 2)==1)
		return true;
	else
		return false;
}

bool Celebrity::operator<=(Celebrity c) const {
	
	/*if(bad != c.getBad()){
		if(bad < c.getBad())
			return true;
		else
			return false;
	}
	
	if(met && !c.getMet())
		return false;
	if(met && c.getMet())
		return true;
	
	if(name.compare(c.getName()) >= 0)
		return true;
	else
	
		return false;	
	*/
	if((rand() % 2) == 1)
		return true;
	else
		return false;
}






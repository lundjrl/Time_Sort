#include <string>
#include "Celebrity.h"



//Mutator methods for Celebrity variables
void setName(std::string n){
	name = n;
}
void setBad(int b){
	bad = b;
}
void setField(std::string f){
	field = f;
}
void setMet(bool m){
	met = m;
}

//Accessor methods for Celebrity variables
std::string getName(){
	return name;
}
int getBad(){
	return bad;
}
std::string getField(){
	return field;
}
bool getMet(){
	return met;
}

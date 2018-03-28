#ifndef CELEB
#define CELEB

#include <string>
#include <iostream>

class Celebrity{

	private:
		std::string name;
		int bad;
		std::string field;
		bool met;

	public:
		Celebrity();
		~Celebrity();
	
		//Setter methods for all instance variables
		void setName(std::string n);
		void setBad(int b);
		void setField(std::string f);
		void setMet(bool met);

		//Getter methods for all instance variables
		std::string getName();
		int getBad();
		std::string getField();
		bool getMet();
		
		bool operator<(const Celebrity c);
};

#endif

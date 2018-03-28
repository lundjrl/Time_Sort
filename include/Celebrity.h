#ifndef CELEB
#define CELEB

class Celebrity{

private:
	std::string name;
	int bad;
	std::string field;
	bool met;

public:
	
	//Setter methods for all instance variables
	void setName(std::string n);
	void setBad(int b);
	void setField(std::string f);
	void setMet(bool met);

	//Getter methods for all instance variables
	std::string getName(); const;
	int getBad();
	std::string getField();
	bool getMet();

};

#endif

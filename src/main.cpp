#include <string>
#include <vector>
#include <iostream>
#include "Celebrity.h"
#include "sorts.h"


int main(int argc, char** argv){
	
	//Ignoring warning messages for main parameters
	//std::ignore = argc;
	//std::ignore = argv;

//	std::vector<Celebrity> celeb{
	/*	Celebrity("Brendon Urie", 10, "music", true),
		Celebrity("Lorde",10 , "music", false),
		Celebrity("Donald Trump", 0, "politics", false),	
		Celebrity("Ira Woodring", 9, "teaching", true),
		Celebrity("Vermin Supreme", 10, "politics", false),
		Celebrity("Quentin Tarantino", 10, "movies", false),
		Celebrity("Kanye West", 5, "music", false),
		Celebrity("Kwame Kilpatrick", 1, "politics", false),
		Celebrity("Flavor Flav", 2, "movies", false),
	*/Celebrity c = Celebrity("Geling Shang", 6, "teaching", true);
//	}

	return 0;
}

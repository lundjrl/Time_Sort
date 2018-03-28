#include <string>
#include <vector>
#include <iostream>
#include "Celebrity.h"


int main(int argc, char** argv){

	std::vector<Celebrity> celeb{
		Celebrity::Celebrity("Brendon Urie", 10, "music", true),
		Celebrity::Celebrity("Lorde",10 , "music", false),
		Celebrity::Celebrity("Donald Trump", 0, "politics", false),	
		Celebrity::Celebrity("Ira Woodring", 9, "teaching", true),
		Celebrity::Celebrity("Vermin Supreme", 10, "politics", false),
		Celebrity::Celebrity("Quentin Tarantino", 10, "movies", false),
		Celebrity::Celebrity("Kanye West", 5, "music", false),
		Celebrity::Celebrity("Kwame Kilpatrick", 1, "politics", false),
		Celebrity::Celebrity("Flavor Flav", 2, "movies", false),
		Celebrity::Celebrity("Geling Shang", 6, "teaching", true),


	return 0;
}

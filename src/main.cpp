#include <string>
#include <vector>
#include <iostream>
#include "../include/Celebrity.h"
#include "../include/sorts.h"
#include <cstdlib>
#include <algorithm>

int main(int argc, char** argv){
	
	//Ignoring warning messages for main parameters
	if(argc != 2){
		std::cout << "ERROR: Enter correct number of parameters" << std::endl;
	}
	int size = atoi(argv[1]);
	std::vector<Celebrity> celeb(size); 
	/*{
		Celebrity("Brendon Urie", 10, "music", true),
		Celebrity("Lorde",10 , "music", false),
		Celebrity("Donald Trump", 0, "politics", false),	
		Celebrity("Ira Woodring", 9, "teaching", true),
		Celebrity("Vermin Supreme", 10, "politics", false),
		Celebrity("Quentin Tarantino", 10, "movies", false),
		Celebrity("Kanye West", 5, "music", false),
		Celebrity("Kwame Kilpatrick", 1, "politics", false),
		Celebrity("Flavor Flav", 2, "movies", false),
		Celebrity("Geling Shang", 6, "teaching", true)
	};*/

	std::string name = "";
	int rating = 1;
	bool haveMet = false;;
	for(int i = 0; i <= size; i++){
		name = "";
		for(int j = 0; j < 8; j++){
			name += std::to_string((std::rand() % 26) + 97);
		}
		rating = (std::rand() % 10 + 1);

		if(std::rand() % 2 == 0)
			haveMet = false;
		else
			haveMet = true;
		celeb.push_back(Celebrity(name, rating, "Etc", haveMet));	
	}
	
	std::cout << "Done adding" << std::endl;
	
	mergeSort(celeb);
	
}

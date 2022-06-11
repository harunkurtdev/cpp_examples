#include <cstdlib>
#include <iostream>
#include <string>
#include <vector> //vector
#include <fstream> //file 

int main() {

	string s_file, s_word;
	std::vector <std::string> vector_print;
	std::vector <std::string> vector_v;
	std::cout << "which file ? find and count ?" << '\n';
	cin >> s_file;
	ifstream if_file(s_file);
	if (if_file.fail()) {
		std::cout << "don't find a file \n";
		exit(1); 
	}
	
	while (if_file >> s_word){
		vector_v.push_back(s_word);
	}
	
	for (int i = 0; i < vector_v.size(); i++) {
		if (find(vector_print.begin(), vector_print.end(), vector_v[i]) == vector_print.end()) {
			std::cout << "\n frequency " << 
			vector_v[i] << ": " << 
			count(vector_v.begin(), vector_v.end(), vector_v[i]) << 
			std::endl;
			vector_print.push_back(vector_v[i]);
		}
	}
	return 0;
}




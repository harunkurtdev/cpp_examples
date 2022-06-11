#include <iostream>
#include <fstream>
#include <cstdlib>

void advice(std::istream* input_file, std::ostream* output_file);

int main() {
	std::cout << " file string input";
	std::string file_string;
	std::cin >> file_string;
	std::ifstream myFile(file_string);
	std::ofstream myFile2(file_string);
    
    if (myFile.fail()&&myFile2.fail()) {
        exit(1); 
    }
    std::cout << "output file 1" << '\n';
	advice(&myFile, &std::cout);
    std::cout << "enter advice for file 2" << '\n';
	advice(&std::cin, &myFile2);
    myFile.close();
	myFile.close();
    std::cout << "close file.." << '\n';
}


void advice(std::istream* input_file, std::ostream* output_file) {
	char c1{}, c2{};
    boot a=(c2 == '\n' && c1 == '\n');
	while (!a) {
		c1 = c2;
		(*input_file).get(c2); (*output_file) << c2;
    }
}

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

int main() {
	std::string csv, tsv;
    char c; bool b = false;
	std::cout<<"\n comma seperated file \t tab seperated file"<<std::endl;
	std::cin >> csv>>tsv;

	std::ifstream file_CSV(csv); std::ofstream file_TSV(tsv);
	
    if (file_TSV.fail() || file_CSV.fail()) { 
        std::cout << "exit programm" << '\n';
        exit(1); 
    }
    
    while (!(file_CSV.eof())){
		file_CSV.get(c);
		if (c == '"') b = !b;
		(c == ',' && !b) ? file_TSV << '\t' : file_TSV << c;
    }

    return 0;
}

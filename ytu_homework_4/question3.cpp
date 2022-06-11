#include <iostream>
#include <string>
#include <cmath>

double func(int i_whole, int i_num, int i_denom);

int main() {

	int i_stock(0), i_whole(0), i_num(0), i_denom(0);
	std::string s="s";
	while (resp[0] == 'y') {
		std::cout << "total stock "<<std::endl;
		std::cin >> i_stock;
		std::cout << " whole stock "<<std::endl;
		std::cin >> i_whole;
		std::cout << "fraction part "<<std::endl;
		std::cin >> i_num
        std::cin >> i_denom;
		if (abs(i_denom) < std::pow(10,-4)) 
            std::cout << "division 0"<<std::endl;
		else 
            std::cout << "total val stock" << round(func(i_whole, i_num, i_denom) * 8) / 8.0 * i_stock<< '\n';
       
		std::cout << "countine for yes input y or yes "<<std::endl;
		std::cin >> resp;
        }
	return 0;
}

double func(int i_whole, int i_num, int i_denom) {
	return i_whole + i_num / (double)i_denom;
}
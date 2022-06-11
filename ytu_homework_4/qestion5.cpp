#include <iostream>
#include <string>

int main() {
	double money=0;
	std::string s_coin;
	std::cout<< " dolar - quarter - dime - nickel\n";
	while(money < 3.5) {
		std::cout << "insert coin ";
		std::cin >> s_coin;
		std::string s_target=s_coin.substr(0,2);
        if (s_target == "do") money+= 1;
        else if (s_target[0] == 'q') money+= 0.25;
        else if (s_target == "di") money+= 0.1;
        else if (s_target[0] == 'n') money+=0;
        std::cout << "money "<< money << '\n';
        }
    std::cout << "Enjoy fried twinkie! Change: "<< money-3.5 << '\n';
	return 0;
}

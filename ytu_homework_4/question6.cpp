#include <iostream>

double discount(double& money, double disc, bool fix);

int main() {
	bool fix=false;
	double money{}, disc{};
	std::cout << "money -- discount -- fixed (1 yes - 0 no) ";
	std::cin >> money>> disc>> fix;
    std::cout << "discount "<< discount(money, disc, fix) << '\n';
    std::cout << "price "<< money << '\n';
	
	return 0;
}

double discount(double& money, double disc, bool fix) {
	if (fix) {
        money -= disc;
        return disc; 
    }
	double d = disc * money / 100;
	money *= (1 - disc / 100);
	return d;
}
#include <iostream>

int main(){
    
        double A, R, I, totI, P;
        int M;
        std::cout << "loan amount - interest rate";
        std::cin >> A>>R;
        double init_val = A;
        P = A / 20;
        for (M = 1; A > (P - I); M++) {
            I = A * R / 1200; totI += I; A -= (P - I);
            std::cout << "month " <<M<< " interest "<<I<<" paid loan " << P-I<< " amont left"<<A  << '\n';     
        }
        I = A * R / 1200;
        totI += I;
        std::cout << "Total interest "<<totI<< " annual percentage "<< (totI / M) * (1200 / init_val) << '\n';
	return 0;
}

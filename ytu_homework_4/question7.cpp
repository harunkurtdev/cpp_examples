#include <iostream>
#include <cmath>

//� = 13.12 + 0.6215 ∗ � − 11.37 ∗ �!.#$ + 0.3965 ∗ � ∗ �!.!#$
double wind(double v,double t){

    if(t>=10) throw std::invalid_argument(" you must input t<=10"); 

    return 13.12+0.6215*t+11.37*pow(v,0.16)+0.3965*t*pow(v,0.016);

}

int main(int argc, char const *argv[])
{
    double v,t,W;
    std::cout << "please input v and t for wind" << '\n';
    std::cin>>v>>t;
    try
    {
        W=wind(v,t);
        std::cout << "wind " <<W << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

}

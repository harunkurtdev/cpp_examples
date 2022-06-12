/**
 * @file manipulator_function.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

/**
 * @brief Set the up file object ile cout ile gösterilemeye
 * çalışan verileri istediğimiz şekilde manipule edip 
 * gösterebilir düzenleyebiliriz.
 * 
 * @param stream 
 * @return std::ostream& 
 */

//io manip bize bazı özel fonksiyonlar tanımlamakta 
// bu fonksiyonlaradn bitaesini biz bir değerin sadece alındığında 
//hex olduğunu göstermek istedik
#include <iomanip> 

/**
 * @brief Set the up file object
 * seup file içerisinde çıktı verileri üzeirnde değişijlik yapabilmesini
 * sağlamas yapabilmesini sağlıyoruz...
 * @param stream 
 * @return std::ostream& 
 */
std::ostream &setup_file(std::ostream &stream){
    stream.setf(std::ios::left);
    stream<<"xxxxx";
    return stream;
}

int i;

/**
 * @brief 
 * 
 * bu fonksyion içerisinde input ile ilgili işlemler yaparken biz
 * input kısmını manipüle edip düzenleme yapabilme sağlamasını istiyoruz
 * sadece alınan değeri hex olarak almasını ve bu değer olarak atamasını sağlamaktayız.
 * @param stream 
 * @return std::istream& 
 */
std::istream &input_file(std::istream &stream){
    std::cin >>std::hex; // hex veriisi olarak atama yap
    std::cout << "input valll" << '\n';
    return stream;
}

int main(int argc, char const *argv[])
{
    /* code */
    
    std::cout << "valll : "<< setup_file << '\n';
    //manipüle edilmiş değeri almaktayız.
    std::cin>>input_file>>i;
    std::cout<< "i : "<<i<<std::endl; 
    return 0;
}

/**
 * @file reading_writing_file.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include<fstream>

/**
 * @brief vbu örnekte biz direkt olarak verilen
 * ofstream ile bir dosya oluşturdu ve üzerine yazdırma işlemleri yapmış bulunmaktayız
 * 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char const *argv[])
{

    std::ofstream out("file.txt");

    //dosya açılmamış ise direkt olarak bu işlem içerisine gir ve yazıyı sonlandır....
    if (!out)
    {
        std::cout << "not opened file" << '\n';
        return 1;
        /* code */
    }

    //doysa üzerine yazmasını sağla
    out<<"file xx"<<std::endl;
    //dosyayı kapatma işlemi
    out.close();
    

    /* code */
    return 0;
}

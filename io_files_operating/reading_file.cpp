/**
 * @file reading_file.cpp
 * @author your name (you@domain.com)
 * @brief bu örnek kayıt edilen file dosyasının iiiiçinden veri alarak atama işlemi yapmaktadır.
 * @version 0.1
 * @date 2022-06-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
//dosya işlemlerli yapmaktadır.
#include <fstream>

int main(int argc, char const *argv[])
{
    //input file dosya işlemleri için gerekli olan kısım

    std::ifstream inputFile("file.txt");

    //string türünde char verileri tanımlandı
    char* str;
    char* strx;
    char* stry;

    //dosyaaçılmadı ise işlemi sonlandırma yapsın
    if (!inputFile)
    {
        std::cout << "cannot opened file" << '\n';
        return 1;
    }

    //dosyadan verileri çekerek değişkenlere >> ile atama yapılmaktadır..
    inputFile>>str;
    inputFile>>stry;
    
    //atanan verileri gösterilmeye çalışılmaktadır...
    std::cout << str<<" veri str   " <<stry <<" veri  stry"<< '\n';

    //dosya kapatılması sağlanmaktadır.
    inputFile.close();
    /* code */
    return 0;
}

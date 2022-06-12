/**
 * @file opening_and_closing.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
// file işlemleri çin fstream var
#include <fstream>

int main(int argc, char const *argv[])
{
    //fstream ile dosya oluşturuldu
    std::fstream myfile;
    //dosya açmaya çalışıldı
    myfile.open("test");
    //dosya açılıp açılmadığı kontrol edildi
    if (!myfile)
    {
        std::cout<<"file not opened";
    }
    //myfile içerisinde hazır fonksiyon ile file açılıp açılmadığı
    //bool değişkeni ile kontrol edilmekte
    if(!myfile.is_open()){
        std::cout<<"file not opened";
    }
    //close ile file kapatılmaktadır.
    myfile.close();
    /* code */
    return 0;
}

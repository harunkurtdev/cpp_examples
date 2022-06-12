#include <iostream>

/**
 * @brief ThreeD sınıfına hem üzerine veri yazdırılmakta 
 * hemde üzerinden veriler çekilebilmektedir böylece verilerin gösterilmesi sağlanmıştır...
 * 
 *  friend fonksiyonu ile istream ve ostream tanımlanarak private tanımlı olan
 * değişkenler üzerine yeni veriler işlenmektedir.
 * 
 */


class ThreeD
{
private:
    int x;
    int y;
    int z;
public:
    ThreeD(int a,int b,int c);
    friend std::ostream &operator<<(std::ostream &stream,ThreeD obj);
    friend std::istream &operator>>(std::istream &stream,ThreeD &obj);
    ~ThreeD();
};

ThreeD::ThreeD(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}

ThreeD::~ThreeD()
{
}

std::ostream &operator<<(std::ostream &stream,ThreeD obj){

    stream<<obj.x<<"\t";
    stream<<obj.y<<"\t";
    stream<<obj.z<<"\n";

    return stream;
}

/**
 * @brief bu fonksiyon sayesinde verilerimizi girdisi olarak sınıf verilerek giriş işlemi yapılmaktadr
 * 
 * @param stream bize direkt olarak verinin girilmesini sağlamaktadır.
 * @param obj yazdırılmak istennen verinin sınıf türünü belirtmektedir
 * @return std::istream& bize "cin" den gelen verinin gösterilmesini sağlamaktadır. 
 */
// >> ile giriş yapılacak dataların tanımlanmasını  sağlamaktadır.
std::istream &operator>>(std::istream &stream,ThreeD &obj){
    stream>>obj.x>>obj.y>>obj.z;

    return stream;
}

int main(int argc, char const *argv[])
{
    /* code */
    ThreeD a(1,2,3),b(0,0,0);
    std::cout << a;
    std::cin>>b;// istream operatörü ile cinden gelen dataların girişini sağlamaktadır.

    std::cout << b;// değişkenkerin üzerine yazılan veri ürü ile
    // yazdırılma işlemleri yapılmaktadır...
    return 0;
}

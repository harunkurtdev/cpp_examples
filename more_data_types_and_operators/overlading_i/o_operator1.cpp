#include <iostream>
using namespace std;

/**
 * @brief Harun KURT
 * bu örnek bize verilen bir class ya da fonksiyonun verilerini
 * cout verildiği zaman main içerisinde tanımlanan veri 
 * veya değişkenin dirket olarak versini yazdırmasını sağlar
 * ve böylece verdiğimiz değerler neticesinde direkt olarak
 * verimiz çıktı olarak sunulur
 */


// class tanımalnadı
class ThreeD
{
private:
    /* data */
    
public:
    //veriler public olarak tanımlandı
    int x;
    int y;
    int z;
    // constructer sayesinde alınan veriler atandı
    ThreeD(int a,int b,int c):x(a),y(b),z(c){};
    ~ThreeD();
};
ThreeD::~ThreeD()
{
}


/**
 * @brief 
 * 
 * @param stream output stream üzerinden gelen data gösteriliyor stream üzerine
 * yazdırılıyor
 * @param obj tanımlanan class türü olduğundan bahsediyoruz
 * @return ostream& öncesinde operator verilerek ostream üzerine yazdırılması sağalnamkta 
 */
ostream &operator<<(ostream &stream,ThreeD obj){
    // ThreeD içindeki class ın verileri çekilmekte...
    stream <<obj.x<<", ";
    stream <<obj.y<<", ";
    stream <<obj.z<<"\n";
    // stream verisini return etmekteyiz
    return stream;
}

int main(int argc, char const *argv[])
{
    ThreeD a(1,2,3),b(4,5,6);
    // cout diyerek a ve b sınıfı içindeki ostream sayesinde yazdırmış olduk
    cout<<a<<b;
    return 0;
}

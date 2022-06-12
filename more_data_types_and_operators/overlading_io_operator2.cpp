#include<iostream>


/**
 * @brief ThreeD classı dirket olarak kordinatları tutmakta
 * bu uygulama friend classını kullandık bu sayede friend fonksiyonunu kullandık
 * bu fonksiyon sayesinde tanımladığımız 
 * &operator<<(x,y) fonksiyonuna gizli(private) verilermizi yazdırılmasını sağlamaktayız...
 *
 */
class ThreeD
{
private:
    /* private data */
    int x;
    int y;
    int z;
public:
    //constructer
    ThreeD(int a, int b,int c):x(a),y(b),z(c){};
    //friend fonksiyonu ile fonksiyonu birbiri ile ilişiki ettik
    friend std::ostream & operator<<(std::ostream &stream,ThreeD obj);
    ~ThreeD();
};

// ThreeD::ThreeD(/* args */)
// {
// }

ThreeD::~ThreeD()
{
}
// ostream &operator "--------<<------" işaretine dikkat
std::ostream &operator<<(std::ostream &stream,ThreeD obj){
    //gelen data üzerinden ThreeD sınıfını obj olarak tanımlayarak
    // x y z konumları girildi
    stream<<obj.x<<", ";
    stream<<obj.y<<", ";
    stream<<obj.z<<"\n";

    return stream;
}


int main(int argc, char const *argv[])
{
    /* code */
    //ThreeD sınıfını yanımladık tanımlanan sınıf ile x y z konumlarını girerek
    ThreeD a(1,2,3),b(4,5,6);
    // sadece verilen değerlerin çıktısı alınması sağlanmış oldu
    std::cout<<a<<b;
    return 0;
}

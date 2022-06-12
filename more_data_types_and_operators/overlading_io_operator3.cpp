#include <iostream>

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


std::istream &operator>>(std::istream &stream,ThreeD &obj){
    stream>>obj.x>>obj.y>>obj.z;

    return stream;
}

int main(int argc, char const *argv[])
{
    /* code */
    ThreeD a(1,2,3),b(0,0,0);
    std::cout << a;
    std::cin>>b;

    std::cout << b;
    return 0;
}

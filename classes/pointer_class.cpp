#include <iostream>

class pointer_class
{
private:
    /* data */
    int x;
    int y;
public:
    pointer_class(int x=0,int y=0){
        this->x=x;
    this->y=y;
    }
    pointer_class &setX(int a){
        x= a;
        return *this; //return poiter class with *this
    }
    pointer_class &setY(int b){
        y= b;
        return *this;
    }
    void print(void);
    ~pointer_class();

};

void pointer_class::print(){
    std::cout << " x = " <<x << '\n';
    std::cout << " y = " <<y << '\n';
}


pointer_class::~pointer_class(){} //



int main(int argc, char const *argv[])
{
    pointer_class obj1(5,5);
    obj1.setX(6).setY(6);
    obj1.print();
    /* code */
    return 0;
}

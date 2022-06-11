#ifndef class_hpp
#define class_hpp

class classX
{
private:
    /* data */

    int x;

public:
    classX(int a);
    void print(void);
    ~classX();
};

void classX::print(){
    std::cout << "x val "<< x << '\n';
}

classX::classX(int a)
{
    x=a;
}

classX::~classX()
{
}

#endif
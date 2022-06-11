#include <iostream>
#include <string>

class array_class {
private:
    int x;
public:
    // array_class(int val): x(val){};
    void setVal(int a);
    int print();
    // setval (int a): x(a){} 
    ~array_class();
};

void array_class::setVal(int a=0){
    x=a;
}

int array_class::print(){
    return x;
}
array_class::~array_class()
{
}


int main(int argc, char const *argv[])
{
    array_class arr[2];
    //pointerlı array tanımlandı 
    array_class *ptr;
    //array üzerine veri atandı
    for (size_t i = 0; i < 2; i++)
    {
    arr[i].setVal(i*2*2);   
    }
    //array üzerinde ki veriler pointer üzerine atandı
    ptr=arr;
    // for ile veriler tek tek çekildi
    for (size_t i = 0; i < 2; i++)
    {
    // array üzerine tanımlı veriler çekildi
    std::cout << "from arr"<<  arr[i].print()<< '\n';
    // pointer a atanmış veriler çekildi.
    std::cout << "from ptr"<<  (ptr+i)->print()<< '\n';

        
    }
    

    

    
    
    /* code */
    return 0;
}

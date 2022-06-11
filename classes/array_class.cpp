#include <iostream>
#include <string>

class array_class {
private:
    int x;
public:
    array_class(int val)/*: x(val)* only constructer*/{
    x=val;
    };
    int print();
    // setval (int a): x(a){} 
    ~array_class();
};

// array_class::array_class(/* args */)
// {
// }

int array_class::print(){
    return x;
}
array_class::~array_class()
{
}


int main(int argc, char const *argv[])
{
    array_class arr(5);

    array_class *ptr1,*ptr2,*ptr3;

    //var olan array class ı pointer a atama
    ptr1=&arr;
    // yeni bir array class atama
    ptr2=new array_class(8);
    
    //pointer üzerinden array olarak array class verisi atama verisi atama
    ptr3=new array_class[2] {7,9};


    //normal olan x berisini . olarak çekiyoruz
    std::cout << arr.print() << '\n';
    //pointer a atanan veriye print üzerinden ok ile gösgteriyoruz
    std::cout << ptr1->print() << '\n';
    //pointer 2 ye atanan yeni bir class oluşturarak veri çekiyoruz
    std::cout << ptr2->print() << '\n';
    // array class a verilen arrayları çekme
    std::cout << ptr3[0].print() << '\n';
    std::cout << ptr3[1].print() << '\n';
    // show(ptr1->print());
    
    /* code */
    return 0;
}

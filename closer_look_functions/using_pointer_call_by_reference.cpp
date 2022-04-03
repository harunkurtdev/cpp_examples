#include<iostream>

void swap(int *x,int *y);

int main(int argc, char const *argv[])
{

    int i,j;
    i=10;
    j=20;

    std::cout << "inital value i " <<i <<" j is " <<j << '\n';

    swap(&i,&j); //call swap with adresses of i and j 
    
    std::cout << "swapped values i " <<i <<" j is " <<j << '\n';

    /* code */
    return 0;
}


void swap(int *x,int *y){

    int temp;

    temp=*x; //save the value at x
    *x=*y; // put value at y into variable at x
    *y=temp; // put value at x into the variable at y

}
#include<iostream>
#include<math.h>

using namespace std;
#define hex0 pow(16,0) 
#define hex1 pow(16,1) 
#define hex2 pow(16,2) 
#define hex3 pow(16,3) 
#define hex4 pow(16,4) 
#define hex5 pow(16,5) 
#define hex6 pow(16,6) 
#define hex7 pow(16,7)
#define hex8 pow(16,8)
#define hex9 pow(16,9)

typedef enum myenumx{
    choose_1=1,
    choose_0=0
}myenumx;

int main(int argc, char const *argv[])
{   
    bool check=true;
    int count; 
    myenumx myenum;

    int decimalVal, char_val, i, k;
    char hexaDecimalVal[50];

    int val1,val2,new_val;
    while (check!=false)
    {

        std::cout << "input value 1 " << '\n';
        std::cin >>val1;
        std::cout << "input value 2 " << '\n';
        std::cin >>val2;
        new_val=val1+val2;

        decimalVal=new_val;
        i=0;
        while(decimalVal!=0)
        {
            char_val = decimalVal%16;
            if(char_val<10)
                char_val = char_val+48;
            else
                char_val = char_val+55;
            hexaDecimalVal[i] = char_val;
            i++;
            decimalVal = decimalVal/16;
        }
        // std::cout<<k<<"\t\t";
        for(i=i-1; i>=0; i--)
            std::cout<<hexaDecimalVal[i];

        std::cout << " hex val and total val  "<<new_val << '\n';
        int choose;
        std::cout << "Are you exitfrom program? 0 no , 1 yes" << '\n';
        std::cin >> choose;
        (choose==choose_1)?check=false:check=true;

    }
    
  
    return 0;
}

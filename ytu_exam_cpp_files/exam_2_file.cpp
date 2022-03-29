#include<iostream>
#include<stdio.h>
using namespace std;


int main(int argc, char const *argv[])
{
    char name[20];
    char surname[20];

    int i=0;

    std::cout << "Plase input name" << '\n';
    // std::cin >> ;
    gets(name);

    do{ 
        if(!((name[i]>='A')&&(name[i]<='z'))){
            std::cout << "Your name is incorrect, plase don't write number  " << '\n';
            std::cout << "Plase input name" << '\n';
    
            gets(name);
            i=0;
            }

        i++;
    }while (name[i]!='\0');
    
    i=0;
  
    std::cout << "Plase input surname" << '\n';
    gets(surname);

    
   
      
    do{
        
        if(!((surname[i]>='A')&&(surname[i]<='z'))){
            std::cout << "Your surname is incorrect, plase don't write number  " << '\n';
            std::cout << "Plase input surname" << '\n';
    
            gets(surname);
            i=0;
            }

        i++;
    }while (surname[i]!='\0');
        

    return 0;
}

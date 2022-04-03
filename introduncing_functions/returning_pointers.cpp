#include <iostream>

using namespace std;

char *get_substr(char *sub,char *str);

int main(int argc, char const *argv[])
{
    char *substr;

    substr=get_substr("three","one two three four");

    std::cout << "substring found : "<<substr<< '\n';
    // output : three four
    /* code */
    return 0;
}

char *get_substr(char *sub,char *str){
    int t;
    char *p,*p2,*start;

    for (t = 0; t < str[t]; t++)
    {
        p=&str[t]; //reset pointers
        start=p;
        p2=sub;
        while (*p2&&*p2==*p) //check for substring
        {
            p++; p2++;
        }
        if(!*p2){
            return start;
        }
        
    }   

    return 0;
}
#include <cmath>
#include<iostream>

using namespace std;

int main()
{
    
    float R;
    float input_R;
    
    int resistor_input;
    float find_index_largest_resistor;
    
    cout << "How much have you resistor ?" << '\n';
    cin >> resistor_input; 
    
    float all_resistor[resistor_input]={};
    float arr_resistor[resistor_input]={};
    float find_mind_all_resistor[resistor_input]={};

    float total_mind_all_resistor;
    
    for( int index = 0;index < resistor_input;index++)
    {
        cout << "You input "<< index+1 <<" resistor" << '\n';
        cin>> input_R;

        all_resistor[index]=input_R;
        arr_resistor[index]=input_R;

    }

    for(int index = 1;index < resistor_input;++index)
    {
        if(all_resistor[0]<all_resistor[index]){
            // float change;
            // change=all_resistor[index];
            all_resistor[0]=all_resistor[index];
            // all_resistor[index]=change;
            }

    }

     for(int index = 0;index < resistor_input;++index)
    {
        find_mind_all_resistor[index]=all_resistor[0]/arr_resistor[index];
        
        total_mind_all_resistor+=find_mind_all_resistor[index];
    }

    R=all_resistor[0]/total_mind_all_resistor;

    for( int index = 0;index < resistor_input;index++)
    {
        std::cout << "Resistor " << arr_resistor[index] << '\n';
        std::cout << "Resistor midlle " << find_mind_all_resistor[index] << '\n';
        std::cout << "Lrgest " << all_resistor[0] << '\n';
    }

    cout<<"Total resistor calculate is "<< R;

}

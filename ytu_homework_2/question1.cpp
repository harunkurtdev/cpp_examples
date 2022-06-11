
#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>


double averageRainfall[12] = { 40.5,35.3,39.3,42.2,51.3,35.2,14.1,12.5,18,27.5,31.5,44.6 };
double previousRainfall[12];
double aboveBelowRainfall[12];
    
using namespace std;
void displayMode(){
cout << "If you want to see table enter 1, if you want to see graphs enter 2:";
    int display_mode = 0;
    cin >> display_mode;
    if (display_mode == 1)
    {
        cout << "     Months\tJanuary\tFebruary March\tApril\tMay\tJune\tJuly\tAugust\tSeptember\tOctober\tNovember\tDecember" << endl;
        cout << endl;
        cout << "Above/Below";
        for (int a = 0; a < 12; a++)
        {
            if (a == 9 || a == 11)
            {
                cout << "\t";
            }
            cout << "\t" << aboveBelowRainfall[a];
        }
        cout << endl;
    }
    else if (display_mode == 2)
    {
        int number_of_asterix_p[12];
        int number_of_asterix_a[12];
        int res= 2;
        for (int a = 0; a < 12; a++)
        {
            number_of_asterix_a[a] = averageRainfall[a] / res;
            number_of_asterix_p[a] = previousRainfall[a] / res;
        }
        cout << "   Average January|";
        for (int a = 0; a < number_of_asterix_a[0]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "  Previous January|";
        for (int a = 0; a < number_of_asterix_p[0]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "  Average February|";
        for (int a = 0; a < number_of_asterix_a[1]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << " Previous February|";
        for (int a = 0; a < number_of_asterix_p[1]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "     Average March|";
        for (int a = 0; a < number_of_asterix_a[2]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "    Previous March|";
        for (int a = 0; a < number_of_asterix_p[2]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "     Average April|";
        for (int a = 0; a < number_of_asterix_a[3]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "    Previous April|";
        for (int a = 0; a < number_of_asterix_p[3]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "       Average May|";
        for (int a = 0; a < number_of_asterix_a[4]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "      Previous May|";
        for (int a = 0; a < number_of_asterix_p[4]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "      Average June|";
        for (int a = 0; a < number_of_asterix_a[5]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "     Previous June|";
        for (int a = 0; a < number_of_asterix_p[5]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "      Average July|";
        for (int a = 0; a < number_of_asterix_a[6]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "     Previous July|";
        for (int a = 0; a < number_of_asterix_p[6]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "    Average August|";
        for (int a = 0; a < number_of_asterix_a[7]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "   Previous August|";
        for (int a = 0; a < number_of_asterix_p[7]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << " Average September|";
        for (int a = 0; a < number_of_asterix_a[8]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "Previous September|";
        for (int a = 0; a < number_of_asterix_p[8]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "   Average October|";
        for (int a = 0; a < number_of_asterix_a[9]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "  Previous October|";
        for (int a = 0; a < number_of_asterix_p[9]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "  Average November|";
        for (int a = 0; a < number_of_asterix_a[10]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << " Previous November|";
        for (int a = 0; a < number_of_asterix_p[10]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "  Average December|";
        for (int a = 0; a < number_of_asterix_a[11]; a++)
        {
            cout << "*";
        }
        cout << endl;
        cout << " Previous December|";
        for (int a = 0; a < number_of_asterix_p[11];a++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int currentMonth;
    cout << "Please enter current month: ";
    cin >> currentMonth;
   
    int previous_i = currentMonth - 1;
    for (int a=0;a<12;a++)
    {
        if (previous_i == 0)
        {
            previous_i = 12;
        }
        cout << "actual rainfall of Month " << previous_i << ":";
        cin >> previousRainfall[previous_i-1];
        previous_i = previous_i - 1;
    }
   
    for (int a = 0; a < 12; a++)
    {
        aboveBelowRainfall[a]=previousRainfall[a]-averageRainfall[a];
    }

    displayMode();
    
}
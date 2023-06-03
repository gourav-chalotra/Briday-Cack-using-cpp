#include <iostream>
#include <vector>
#include<Windows.h>
#include<stdlib.h>
using namespace std;
class cack
{
public:
    string cack1 = "\t\n\n      ,,,,,   \t\n      |||||   \t\n    =========\t\n   @@@@@@@@@@@\t\n   {~@~@~@~@~}\t\n   @@@@@@@@@@@\t\n\n";
    void cackDrow()
    {
        cout << cack1 << endl;
    }
    void changeFlame()
    {
        for(int i = 0; i < cack1.size();i++)
        {
            if(cack1.at(i) == ',')
            {
                cack1.at(i) = '\'';
            }
        }
    }
    void rearrange()
    {
        for(int i = 0; i < cack1.size();i++)
        {
            if(cack1.at(i) == '\'')
            {
                cack1.at(i) = ',';
            }
        }
    }
};
int main()
{
    cack c;
    while (true)
    {
        auto val = "Color 02";
        system(val);
        c.cackDrow();
        _sleep(250);
        system("cls");
        val = "Color 05";
        system(val);
        c.changeFlame();
        c.cackDrow();
        _sleep(250);
        system("cls");
        c.rearrange();
        c.cackDrow();
        system("cls");
        
    }
}
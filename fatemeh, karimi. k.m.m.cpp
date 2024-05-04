//fatemeh Karimi 402431032
#include<iostream>
using namespace std;

int main()
{
    int one,twe,lcm;
    
    cin >> one;
    cin >> twe;
    
    one>twe ? lcm=one : lcm=twe;
    
    int i=1; 
    while (i)
    {
        if( lcm%one==0 && lcm%twe==0 )
        {
            cout << "k.m.m : " << lcm;
            break;
        }
        lcm++;
    }
    
    return 0;
}
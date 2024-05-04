//fatemeh karimi 402431032
#include <iostream>
using namespace std;
int main ()
{
    int number;
    cin >> number;
    for ( number ; number > 0 ; number )
    {
        int bit = number % 2;
        cout << bit << " " ;
        number = number / 2;
    }
    return 0;
    
}
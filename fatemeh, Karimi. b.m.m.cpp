//fatemeh Karimi 402431032
#include<iostream>
using namespace std;

int main()
{
    int number1,number2,big;
    
    cin>>number1;
    cin>> number2;
    
    number1>number2 ? big=number1: big=number2;
    
    int max = -1;
    
    for ( int i=1; i<=big ; i++)
    {
        if( number1%i==0 && number2%i==0 && i>max )
        {
            max = i;
        }
    }
    cout << "b.m.m : " << max;
    
    return 0;
}
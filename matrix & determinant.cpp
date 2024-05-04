//Fatemeh Karimi   402431032
#include <iostream>
using namespace std;

int determinant (int arrey[3][3]);


int main()
{
    int arrey[3][3];
    cout << "the elements of the matrix : " << endl<<endl;
    for ( int i=0 ; i<3 ; i++ )
    {
        for ( int j=0 ; j<3 ; j++ )
        {
            cout << "column: " << i+1<< " row: "<< j+1 << " ==>  ";
            cin >>  arrey[i][j] ;
        }
    }
    
    cout << endl <<"the matrix is : " << endl;
    for ( int i=0 ; i<3 ; i++ )
    {
        for ( int j=0 ; j<3 ; j++ )
        {
            cout << arrey[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "determinant ==> " ;
    cout << determinant(arrey);
    
    return 0;
}
int determinant (int arrey[3][3])
{
    int determinant =((arrey[0][0] * arrey[1][1] * arrey[2][2]) + (arrey[0][1] * arrey[1][2] * arrey[2][0]) + (arrey[0][2] * arrey[1][0] * arrey[2][1])) 
        - ((arrey[0][2] * arrey[1][1] * arrey[2][0]) + (arrey[0][0] * arrey[1][2] * arrey[2][1]) + (arrey[0][1] * arrey[1][0] * arrey[2][2]));
    return determinant;
}

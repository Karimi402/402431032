//fatemeh Karimi    402431032
#include <iostream>
using namespace std;

int main() 
{
    int matrix[3][3] , vector[3] , zarb[3] = {0};

    cout << "the elements of a matrix:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << "column: " << i+1 << " row: "<< j+1 << "==>  ";
            cin >> matrix[i][j];
        }
    }

    cout << endl << "the elements of a vector:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        cout << "elements: " << i+1 << "==>  ";
        cin >> vector[i];
    }
    cout << "[ " ;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            zarb[i] += matrix[i][j] * vector[j];
        }
        cout << zarb[i] << " ";
    }
    cout << "]";
    return 0;
}
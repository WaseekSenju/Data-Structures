#include <iostream>
using namespace std;

int main()

{
    int *array = new int[2];
    array[5] = 12;
    cout << array[5];
    cout << array[5];
    cout << array[5];
    cout << array[5];

    // -------------------------------------2D array

    // int **a2d = new int *[20]; // we are allocation 20 integar pointers the actuall ararys are not event allocated yet

    // for (int i = 0; i < 20; i++)
    // {
    //     a2d[i] = new int[2];
    // }

    // for (int i = 0; i < 20; i++)
    // {
    //     for (int j = 0; j < 20; j++)
    //     {
    //         a2d[i][j] = '*';
    //     }
    // }

    // for (int i = 0; i < 20; i++)
    // {
    //     for (int j = 0; j < 20; j++)
    //     {
    //         cout << a2d[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int ***a3d = new int **[20];

    // for (int i = 0; i < 20; i++)
    // {
    //     a3d[i] = new int *[20];
    //     for (int j = 0; j < 20; i++)
    //     {
    //         int **ptr = a3d[i];

    //         ptr[j] = new int[20];
    //     }
    // }

    // for (int i = 0; i < 20; i++)
    // {
    //     for (int j = 0; j < 20; i++)
    //     {
    //         for (int k = 0; k < 20; k++)
    //         {

    //             a3d[i][j][k] = '5';
    //             cout << a3d[i][j][k];
    //         }
    //     }
    // }

    // for (int i = 0; i < 20; i++)
    // {
    //     for (int j = 0; j < 20; i++)
    //     {
    //         for (int k = 0; k < 20; k++)
    //         {
    //             cout << a3d[i][j];
    //         }
    //     }
    // }

    return 0;
}
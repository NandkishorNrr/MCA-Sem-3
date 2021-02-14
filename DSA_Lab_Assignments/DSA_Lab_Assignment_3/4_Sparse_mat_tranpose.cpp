// Q:-4	WAP to transpose a sparse matrix.
#include <iostream>
using namespace std;

int main()
{
    int sparseMatric[4][4] =
        {
            {0, 0, 3, 0},
            {0, 0, 5, 7},
            {0, 0, 0, 0},
            {0, 2, 6, 0}};

    int transposeMat[4][4];

    cout << "Sparse Matric.\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << sparseMatric[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            transposeMat[i][j] = sparseMatric[j][i];

    cout << "Transpose of Sparse Matric.\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << transposeMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
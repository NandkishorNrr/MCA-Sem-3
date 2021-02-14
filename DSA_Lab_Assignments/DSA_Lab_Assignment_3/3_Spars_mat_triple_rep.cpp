// Q:-3	WAP to convert a sparse matrix in computer/triplet representation.
#include<iostream>
using namespace std;

int main()
{
    int sparseMatrix[5][6] =
    {
        {0 , 0 , 0 , 0 , 9, 0 },
        {0 , 8 , 0 , 0 , 0, 0 },
        {4 , 0 , 0 , 2 , 0, 0 },
        {0 , 21 , 0 , 0 , 0, 5 },
        {0 , 0 , 2 , 0 , 15, 0 }
    };

    int size = 0;
    for (int row = 0; row < 5; row++)
        for (int column = 0; column < 6; column++)
            if (sparseMatrix[row][column] != 0)
                size++;

    int resultMatrix[size+1][3];

    int k = 0;
    resultMatrix[k][0] = 5;
    resultMatrix[k][1] = 6;
    resultMatrix[k][2] = size;
    k++;
    for (int row = 0; row < 5; row++)
        for (int column = 0; column < 6; column++)
            if (sparseMatrix[row][column] != 0)
            {
                resultMatrix[k][0] = row;
                resultMatrix[k][1] = column;
                resultMatrix[k][2] = sparseMatrix[row][column];
                k++;
            }
    cout<<"Triplet Representation : "<<endl;
    for (int row=0; row<size+1; row++)
    {
        for (int column = 0; column<3; column++)
            cout<<resultMatrix[row][column]<<" ";
        cout<<endl;
    }
    return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;
class Mat
{
private:
    int M1[3][3], M2[3][3], S[3][3], M[3][3], BT[3][3], T[3][3];
public:
    void add();
    void mul();
    void trp();
    void dis();
};
void Mat::add()
{
    cout << "Enter elements of [" << 3 << "]X[" << 3 << "] of 1st martix.\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> M1[i][j];
    cout << "Enter elements of [" << 3 << "]X[" << 3 << "] of 2nd martix.\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> M2[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            S[i][j] = M1[i][j] + M2[i][j];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << S[i][j] << "\t";
        cout << "\n";
    }
}
void Mat::mul()
{
    cout << "Enter elements of [" << 3 << "]X[" << 3 << "] of 1st martix.\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> M1[i][j];
    cout << "Enter elements of [" << 3 << "]X[" << 3 << "] of 2nd martix.\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> M2[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            M[i][j] = M1[i][j] * M2[i][j];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << M[i][j] << "\t";
        cout << "\n";
    }
}
void Mat::trp()
{
    cout << "Enter elements of [" << 3 << "]X[" << 3 << "] of 1st martix.\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> BT[i][j];
    int transposeMat[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            T[i][j] = BT[j][i];

    cout << "Transpose of Sparse Matric.\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << T[i][j] << "\t";
        }
        cout << endl;
    }
}
void Mat::dis()
{
    int chi;
    cout << "1. 1st Matrix\n";
    cout << "2. 2nd Matrix\n";
    cout << "3. Matrix befor transepose.\n";
    cout << "\n\t\t***\n";
    cout << "Enter your choice.\n";
    cin >> chi;
    switch (chi)
    {
    case 1:
        cout << "1. 1st Matrix\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cout << M1[i][j] << "\t ";
            cout << "\n";
        }
        break;
    case 2:
        cout << "2. 2nd Matrix\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cout << M2[i][j] << "\t";
            cout << "\n";
        }
        break;
    case 3:
        cout << "Matrix, befor transpose.\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cout << BT[i][j] << "\t";
            cout << "\n";
        }
        break;
    default:
        cout << "\nInvalid choice.\n";
        break;
    }
}
int main()
{
    Mat m1;
    int ch;
    while (1)
    {
        system("CLS");
        cout << "1. Add two matrix.\n";
        cout << "2. Multiply two matrix.\n";
        cout << "3. Transpose a matrix.\n";
        cout << "4. Display matrix.\n";
        cout << "5. Exit.\n";
        cout << "\n\t\t***\n";
        cout << "Enter your choice.\n";
        cin >> ch;
        system("CLS");
        switch (ch)
        {
        case 1:
            m1.add();
            break;
        case 2:
            m1.mul();
            break;
        case 3:
            m1.trp();
            break;
        case 4:
            m1.dis();
            break;
        case 5:
            exit(0);
        default:
            cout << "\nInvalid choice.\n";
            break;
        }
        getch();
    }
    return 0;
}
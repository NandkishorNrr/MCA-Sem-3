// WAP to demonstrate use of pointer, pointer to pointer.
#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    int *p = &num;
    int **ptop = &p;

    cout << "'A'is number " << num; // num is a variable
    cout << "\n*p point to 'A' " << *p; // p pointer contain num's address
    cout << "\n**p point to *p " << **ptop; // ptop pointer to pointer contain p's address
    return 0;
}
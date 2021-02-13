// 2. WAP to find roots of a quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;

void roots(float a, float b, float c)
{
    float D,x1,x2;
    D=b*b-4*a*c;
    if(D>0)
    {
        x1=(-b+ sqrt(D))/(2*a);
        x2=(-b- sqrt(D))/(2*a);
        cout << "Roots are real and different." << endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    else if(D<0)
     {
        float realP,imagP;
        realP=-b/(2*a);
        imagP=sqrt(-D)/(2*a);
        cout << "Roots are imaginary/complax." << endl;
        cout<<"x1 = "<<realP<<" + "<<imagP<<"i"<<endl;
        cout<<"x2 = "<<realP<<" - "<<imagP<<"i"<<endl;
    }
    else
    {
        x1=-b/(2*a);

        cout << "Roots are real and equal" << endl;
        cout<<"x1 = x2 ="<<x1;
    }
}
int main()
{
     float a,b,c;
    cout<<"Enter coeficiant of quadratic equation\n a, b & c\n";
    cin>>a>>b>>c;
    roots(a,b,c);
    return 0;
}

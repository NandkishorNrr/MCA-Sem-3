// 6. WAP to print Fibonacci series up to n terms, where n is given by user.
 #include <iostream>
 using namespace std;

 int fib(int q)
 {
     if (q == 1 || q == 2)
         return 1;
     else
         return (fib(q - 1) + fib(q - 2));
 }
 
 int main()
 {
     int i, n ;
     int fib(int);
     cout<<"Enter value of n.\n";
     cin>>n;
     int arr[n];
     cout<<"Series : ";
     for (i = 1; i <= n; i++)
     {
         arr[i]=fib(i);
         cout<<arr[i]<<"\t";
     }
     return 0;
 }
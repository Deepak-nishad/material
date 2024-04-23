#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x=10;
    int *ptr;
    ptr=&x; // pointer initlization
    cout<<"Applying the pointer arithmetic :- ";
    cout<<"ptr = "<<ptr<<endl;
    cout<<"++ptr = "<<++ptr<<endl; // increment ptr then display
    ptr=&x;
    ptr++; // use ptr then after execution  increment ptr
    cout<<"ptr++ = "<<ptr<<endl; // display incremented pointer
    ptr=&x;
    cout<<"*ptr = "<<*ptr<<endl; // value at ptr i.e 10
    ptr=&x;
    cout<<" *ptr = "<<*ptr<<endl;
    
    
    
    
}

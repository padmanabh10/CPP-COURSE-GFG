//swap two variables
#include<iostream>
using namespace std;
const double PI=3.14;
int main()
{
    int a=1;
    int b=2;
    int c=1;
    int d=2;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl<<b<<endl;

    c=c+d;
    d= c-d;
    c= c-d;
    cout<<c<<endl<<d;
}

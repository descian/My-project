#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    
    int a;
    int b;
    cout<<"Enter the length of the rectangle: ";
    cin>>a;
    cout<<"Enter the width of the rectangle : ";
    cin>>b;
    cout<<"area calculation results  = "<<a*b<<endl;
    cout<<"results of calculating the perimeter of a rectangle  = "<<2*(a+b);
    
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    
    int a;
    cout<<"enter the temperature in Celsius : ";
    cin>>a;
    cout<<"Fahrenheit temperature formula  = F = C*9/5 + 32"<<endl;
    cout<<"Celsius temperature after being converted to Fahrenheit : "<<a*9/5+32;
    return 0;
}
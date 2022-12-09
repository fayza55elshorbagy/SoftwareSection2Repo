#include <iostream>
#include<cmath>

using namespace std;

float avg (float , float )

int main ()
{
    float x,y,z;
    cout<<"enter value of z: ";
    cin>>z;
    cout<<"Your Avg is = "<<avg(x,y) <<endl ;
    cout<<"power is = "<<pow(z,y);
    return 0;
}
float avg (float x , float y)
{
    cout<<"Enter your value of x :  ";
    cin>>x;
    cout<<"Enter your value of y :  ";
    cin>>y;
    return x*y;
}

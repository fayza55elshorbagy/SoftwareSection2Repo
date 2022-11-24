#include <iostream>

using namespace std;

float rect(float, float);

void maxnum(float, float);

bool prime(int x)
{
    for(int i = 2; i < x;i++)
        if(x%i==0)
           return false;

    return true;

}

void order(int x, int y, int z)
{
        cout<<"Your Numbers Forward:"<<x<<y<<z<<endl ;
        cout<<"Your Numbers Reversed:"<<z<<y<<x<<endl;
}

void print(string);

int main()
{
    float length,width,area,num1,num2;
    int num,x,y,z;
    bool result;
    string word;
    cout<<"Enter length and width"<<endl;
    cin>>length>>width;
    area = rect(length,width);
    cout<<"Area of rectangle is:" <<area<<endl;

    cout<<"Enter two numbers to determine which is larger"<<endl;
    cin>>num1>>num2;
    maxnum(num1,num2);
    cout<<endl;

    cout<<"Enter a number to check if its prime or not"<<endl;
    cin>>num;
    result = prime(num);
    if(result == true)
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;


     cout<<"Enter three integer numbers"<<endl;
     cin>>x>>y>>z;
     order(x,y,z);


     cout<<"Enter a Word"<<endl;
     cin>>word;
     print(word);



    return 0;
}

float rect(float x, float y)
{
    float area;
    area = x*y;
    return area;
}

void maxnum(float x, float y)
{
    if (x>y)
        cout<<"The larger number is:"<< x;
        else
         cout<<"The larger number is:"<< y;

}

void print(string x)
{
    for(int i = x.length()-1; i >= 0;i--)
        cout<<x[i]<<endl;

}

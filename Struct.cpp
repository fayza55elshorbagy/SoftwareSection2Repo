#include <iostream>

using namespace std;

class piont
{
    public :
    float x,y ;
    piont ()
    {
        x = 0;
        y = 0;
    }

    piont (float newX , float newY)
    {
        x = newX;
        y = newY;
    }

    void move (float newX , float newY)
    {
        x = newX;
        y = newY;

class piont
{
    public :
    float x,y ;
    piont ()
    {
        x = 0;
        y = 0;
    }

    piont (float newX , float newY)
    {
        x = newX;
        y = newY;
    }

    void move (float newX , float newY)
    {
        x = newX;
        y = newY;
    }

    void display ()
    {
        cout << "(" <<  x << "," << y <<")" ;
    }
};

int main()
{
    piont p1 ;
    piont p2(1,2);
    p1.x=2.1;
    p1.display();
    p2.x=2.5;
    p2.move(1.3,2.5);
    cout << "Hello Ya 3am\n" ;
    int x,y ;
    cout << "Enter Value of x \n ";
    cin >> x ;
    cout << "Enter Value of y \n ";
    cin >> y ;
    return 0;
}

    void display ()
    {
        cout << "(" <<  x << "," << y <<")" ;
    }
};

int main()
{
    piont p1 ;
    piont p2(1,2);
    p1.x=2.1;
    p1.display();
    p2.x=2.5;
    p2.move(1.3,2.5);
    cout << "Hello Ya 3am\n" ;
    int x,y ;
    cout << "Enter Value of x \n ";
    cin >> x ;
    cout << "Enter Value of y \n ";
    cin >> y ;
    return 0;
}

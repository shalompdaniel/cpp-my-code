#include <iostream>
using namespace std;
class INT
{
    int x;

public:
    INT() {}
    INT(int x)
    {
        this->x = x;
    }


    INT friend operator+(INT X, INT Y);
    INT friend operator+(INT X, int y);
    INT friend operator+(int x, INT Y);
    INT friend operator++(INT &X);
    INT friend operator--(INT &X);
    INT friend operator++(INT &X , int y);
    INT friend operator--(INT &X , int y);

    void display()
    {
        cout << endl
             << x;
    }
};

INT operator+(INT X, INT Y)
{
    INT temp;
    temp.x = X.x + Y.x;
    return temp;
}
INT operator+(INT X, int y)
{
    INT temp;
    temp.x = X.x + y;
    return temp;
}
INT operator+(int x, INT Y)
{
    INT temp;
    temp.x = x + Y.x;
    return temp;
}
INT operator++(INT &X)
    {
        X.x = X.x + 1;
    }
INT operator--(INT &X)
    {
        X.x = X.x - 1;
    }
INT operator++(INT &X , int y)
    {
        X.x = X.x + 1;
    }
INT operator--(INT &X , int y)
    {
        X.x = X.x - 1;
    }

int main()
{
    INT X(20), Y(10), Z;
    Z = X + Y;
    Z.display();
    ++Z;
    Z.display();
    --Z;
    Z.display();
    Z++;
    Z.display();
    Z--;
    Z.display();
    return 0;
}

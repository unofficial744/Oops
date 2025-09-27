#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    int x;

    void incX()
    {
        x = x + 1;
    }
};
int main()
{
    A obj;
    A obj1;
    obj.x = 100;
    obj1.x = 200;

    cout << obj.x << endl;
    cout << obj1.x << endl;



    // obj.x = 0;
    // cout << obj.x << endl;
    // obj.incX();
    // cout << obj.x << endl;

    
    return 0;
}
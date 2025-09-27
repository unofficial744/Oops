#include <iostream>
#include <string>
using namespace std;
 
class Shape{
    virtual void draw() = 0;  // Pure Virtual function
};

class Circle : public Shape {
    public: 
    void draw (){
       cout << "drawing a Circle\n";
    }
};
int main(){

    Circle c1;
    c1.draw();
    return 0;
}
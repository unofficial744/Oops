#include <iostream>
#include <string>
using namespace std;
 
class Parent{
public:
    void getInfo(){
        cout << "Parent class\n";
     }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child class\n";
     }
};
int main(){

    Child c1;
    c1.getInfo();
    return 0;
}
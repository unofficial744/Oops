#include <iostream>
#include <string>
using namespace std;
 
class Print
{
public:
    void show(int x){
        cout << "X = " << x;
    }
    void show(char ch){
        cout << "Char = " << ch;
    }
};

int main(){
    Print obj;
    obj.show('A');
    
}
#include <iostream>
#include <string>
using namespace std;
 
class Student{
public:
    string name;

    Student(){
        cout << "Non-Parameterized\n";
    }
    Student(string name){
        this->name = name;
        cout << "Parameterized\n";
    }
};

int main(){

    // Student s1;
    Student s1("tony stark");

    

}
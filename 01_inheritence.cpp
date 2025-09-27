#include <iostream>
#include <string>
using namespace std;

class person{
public: 
    string name;
    int age;

    person( string name, int age){
        this->name = name;
        this->age = age;
    }

    // person(){
    //     cout << "parents\n";
    // }
};

class Student : public person {
    public:
    int rollno;

    Student(string name, int age, int rollno) : person(name, age){
        this->rollno = rollno;
        // cout << "child\n";
    }

        void getInfo(){
            cout << "name : " << name <<endl;
            cout << "Age : " << age <<endl;
            cout << "Rollno : " << rollno <<endl;
        }
};

int main()
{
    Student s1("rahul", 21, 123);
    s1.getInfo();
    
    return 0;
}
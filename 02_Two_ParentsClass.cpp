#include <iostream>
#include <string>
using namespace std;
 
class Student
{
public:
    string name;
    int rollno;
};

class Teacher
{
public:
    string subject;
    double salary;
    
};

class ta : public Student, public Teacher{

};

int main (){
    ta s1;
    s1.name = "raja";
    s1.subject = "Enginnering";

    cout << s1.name << endl;
    cout << s1.subject << endl;
    return 0;
}


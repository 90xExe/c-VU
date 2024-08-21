#include <iostream>
using namespace std;

class Student{
    public:
    void display(){
    cout<<"I am a student"<<endl;
    }

};

class Person: public Student{
    public:
    void display(){

    cout<<"I am a Person"<<endl;
    }

};

class Teacher : public Person{
    public:
    void display(){
    cout<<"I am a Teacher"<<endl;
    }

};

int main(){

    Student s;
    Person p;
    Teacher t;

    s.display();
    p.display();
    t.display();
return 0;
}

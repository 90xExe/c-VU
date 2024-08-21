#include <iostream>
#include <string>

using namespace std;


class Person{
    public:
    string name;
    int age;

    void input(){
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    //cin.ignore();

    cout<<"Enter your age"<<endl;
    cin>>age;
    }

};

class Student: public Person{
    public:
    int id;

    void input2(){
        input();
    cout<<"ENter your id: "<<endl;
    cin>>id;
    }

    void dis(){
    cout<<"Your name is "<<name<<endl;
        cout<<"Your age is "<<age<<endl;

            cout<<"Your id is "<<id<<endl;

    }
};

int main(){
    Student a1;
    a1.input2();
    a1.dis();
return 0;
}

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }

    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }

    void display() {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* basePtr;

    basePtr = &baseObj;
    basePtr->show();
    basePtr->display();

    basePtr = &derivedObj;
    basePtr->show();
    basePtr->display();

    derivedObj.show();
    derivedObj.display();

    return 0;
}

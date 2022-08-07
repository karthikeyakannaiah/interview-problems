#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class student {
    string name;
    public:
    int age;
    char gender;
    //constructor
    student(){
        cout << "default constructor\n";
    }
    student(string s, int a, char g){
        cout << "parameterised constructor\n";
        name = s;
        age = a;
        gender = g;
    }
    student(student &a){
        cout << "copy constructor\n";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    
    void setName(string s){
        name = s;
    }
    void printInfo(){
        cout << name+" " << age << " " << gender << endl;
    }
    void getName(){
        cout << "name is "+name << endl;
    }
    
    // destructor
    ~student(){
        cout << "destructor" << endl;
    }
    
    // operator overloading 
    bool operator == (student &a){
        if ( name == a.name && age == a.age && gender== a.gender){
            return true;
        }
    }
    // function overloading 
    void fun(){
        cout << "I am one" << endl;
    }
    void fun(string s){
        cout << "I am "+s << endl;
    }
    int fun(int a){
        return a;
    }
};
/*
    Inheritance
    single, multiple, multi-level, hybrid, hiearchical
*/
class candidate : public student {
    public:
    using student::student;
    int candId;
    void getcandId(){
        cout << "candidate Id is " << candId << endl;
    }
    candidate(){
        cout << "default constructor\n";
    }
    candidate(int i){
        candId = i;
    }
};
class Base{
    public:
        virtual void print(){
            cout << "this is base print" << endl;
        }
        virtual void display(){
            cout << "this is base display" << endl;
        }
};
class Derived : public Base{
    public:
        void print(){
            cout << "this is derived print" << endl;
        }
        void display(){
            cout << "this is derived display" << endl;
        }
};
int main(){
    // function overriding / virtual function
    Base *baseptr;
    Derived d;
    baseptr = &d;
    
    // baseptr -> print();
    // baseptr -> display();
    
    d.print();
    d.Base::print();
    return 0;
}
/*
    POLYMORPHISM
    two types:
    1 Compile time
        1 Function Overloading
            functions with same name but with different no.of arguments or different datatype of arguments.
        2 Operator Overloading
            Operators with different usage
    2 Run time
        1 Virtual functions (function overriding)
*/
/*
student a("karthikeya",20,'M');
    a.getName();
    student b(a);
    b.printInfo();
    if(b==a){
        cout << "student b is student a" << endl;
    }else {
        cout << "not same" << endl;
    }
*/
// candidate c(1001);
// c.getcandId();
// candidate d(1002);
// c.getcandId();
// c.setName("karthikeya");
// c.getName();
// cout << (int) c.fun(2) << endl;

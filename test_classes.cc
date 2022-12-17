#include<iostream>
#include<string>

using namespace std;


class MyName{
    
    public:
        string name;
        void print(){cout << "Hello " << name;}

        void greet();
};

void MyName ::greet(){cout << "\ngreetings for yOu " << name;}

int main(){
    MyName obj1;
    obj1.name = "Ilya Hyder";
    obj1.print();

    MyName obj2;
    obj2.name = "Hyder";
    obj2.greet();
}
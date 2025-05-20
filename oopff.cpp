#include <iostream>
#include<string>
using std::cout;
using std::endl;
using std::cin;
using std::string;


class mystudents {
    public:
    string name;
    int age;

    void conv(string Name, int Age) {
        name = Name;
        age = Age;
    }

    void print() {
        cout << "My name is: " <<name<<endl;
        cout << "My age is: "<<age<<endl;
    }

    
};

int main () {

    mystudents student0;
    student0.conv("shainna", 19);
    student0.print();

    mystudents vendors;
    vendors.conv("Wenxx", 19);
    vendors.print();

    return 0;

}
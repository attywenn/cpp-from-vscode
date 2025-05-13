#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Student {
public:
    string name;
    int age;

    Student(string nom, int ag) : name(nom), age(ag) {}

    void introduce() const {
        cout << "My name is " << name << endl;
        cout << "I am " << age << " years old." << endl;
    }
};

int main() {
    Student stud("Wency", 19);
    stud.introduce();

    return 0;
}

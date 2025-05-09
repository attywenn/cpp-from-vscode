#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

        void setDetails(string Name, int Age) {
            name = Name;
            age = Age;
        }

        void displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Person person;
    person.setDetails("Wency", 19);
    person.displayDetails();

    return 0;
}
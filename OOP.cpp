#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

class students {
    public:
    string Name;
    string School;
    int Age;

    void callStudents() {
        cout<<"My name is "<<Name<<endl;
        cout<<"My school is "<<School<<endl;
        cout << "My age is " << Age <<endl;
        cout<<endl;
    }
    students (string name, string school, int age) {
        Name = name;
        School = school;
        Age = age;
    }
};

class pets {
    public:
    string animalName;
    string scName;
    int Age;

    void callAnimal(string name, string sn, int age) {
        animalName = name;
        scName = sn;
        Age = age;
    }
};

int main () {
    students student1 = students("Wency", "EARIST", 19);
    student1.callStudents();

    students student2 = students("Shainna", "NTC", 20);
    student2.callStudents();

    students student3 = students("Bryan", "PLMar", 19);
    student3.callStudents();

    students student4 = students("Kyle", "RTU", 20);
    student4.callStudents();

    pets pets1 = pets("Taylor", "Caloocan", 3);
    pets1.callAnimal();

    return 0;

}
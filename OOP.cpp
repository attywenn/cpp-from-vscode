#include <iostream>
using std::string;

class students {
    public:
    string Name;
    string School;
    int Age;

    void callStudents() {
        std::cout<<"My name is "<<Name<<std::endl;
        std::cout<<"My school is "<<School<<std::endl;
        std::cout<<"My age is "<<Age<<std::endl;
        std::cout<<std::endl;
    }
    students (string name, string school, int age) {
        Name = name;
        School = school;
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

    return 0;

}
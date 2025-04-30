#include <iostream>
using std::string;

class students {
    public:
    string name;
    string school;
    int age;

    void callStudents() {
        std::cout<<"My name is "<<name<<std::endl;
        std::cout<<"My school is "<<school<<std::endl;
        std::cout<<"My age is "<<age<<std::endl;
    }
};

int main () {
    students student1;
    student1.name = "Wencyx";
    student1.school = "EARIST";
    student1.age=19;    
    student1.callStudents();

    return 0;

}
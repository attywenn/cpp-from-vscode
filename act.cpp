#include <iostream>
using namespace std;

int main () {
    int x = 10;
    int &y = x;

    int* z = &x;

    cout << x << " " <<y<<endl;
    cout << z<< " " <<&z<<endl;

    cout<<x+y<<endl;

    cout << "Hi, I am attorney wenn!"<<endl;

    cout << "I am "<<x+y-1<<" years old"<<endl;

    return 0;
}
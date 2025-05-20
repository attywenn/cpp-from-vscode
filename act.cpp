#include <iostream>
using namespace std;

int main () {
    int x = 10;
    int &y = x;

    int* z = &x;

    cout << x << " " <<y<<endl;
    cout << z<< " " <<&z;

    return 0;
}
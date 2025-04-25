#include <iostream>
#include <cstdlib>
using namespace std;

int mMenu();
void theBeginning();
void theMessage();


int main () {
    mMenu();
    

    return 0;
}

int mMenu () {
    char ourDate;

    while (1) {
        cout << "\nWhen was the day that we started our relationship? "<<endl;
        cout << "A. December 9, 1854\nB. August 5, 89 BC\nC. March 5, 2025 "<<endl;
        cout << "Your answer: ";
        cin >> ourDate;

        if (ourDate == 'a' || ourDate == 'A') {
            cout<<"\nSana kinain ko na lang ang El Fili."<<endl;
        } else if (ourDate == 'b' || ourDate == 'B') {
            cout << "\nSarap magpapako sa krus lab"<<endl;
        } else if (ourDate == 'c' || ourDate == 'C') {
            cout << "\nDahil tama ka, automatically redirect kita sa gift ko sa 'yo"<<endl;
            system("start www.facebook.com/herrerawency");
            break;
        } else {
            cout << "Wala sa nabanggit, baby ko:(("<<endl;
        }
    }
}
/* For maintainability of the code, READ THIS
accPw(); is for password management
accId(); is for the information of the user
clear(); to clear the texts in the cmd (Works only in Windows!)


Thank you future devs! ==> Atty. Wenn <==
*/

#include <iostream>
#include <string>
using namespace std;

int theMainVal = 1000;
int accPw(string pw); //fpw
int accId();
int clear();

int main() {
	int* ptrVal = &theMainVal;
	string mainPw;


	// sign up++
	accId();
	accPw(mainPw);
	clear();

	return 0;
} 

int accPw(string pw) {
	while (1) {
		cout << "You may enter your password: ";
		cin >> pw;

		if (pw.length() < 8) {
			cout << "Invalid. Please add more letters." << endl;
		}
		else if (pw.length() >= 8) {
			cout << "Your password is " << pw << endl;
			break;
		}
		else {
			cout << "Invalid input. Please try again." << endl;
		}
	}

	cout << "Welcome!" << endl;

	return 0;
}

int accId() {
	string fname,mname,sname,address,country;
	int age;
	char yn;

	while (1) {
		cout << "Input your first name: ";
		getline(cin, fname);
		cout << "Input your middle name: ";
		getline(cin, mname);
		cout << "Input your last name: ";
		getline(cin, sname);

		cout << "Are you sure that your name is " << fname << " " << mname << " " << sname << " ?" << endl;
		cout << "Yes or No? (y if yes, n if no): ";
		cin >> yn;
		cin.ignore();

		if (yn == 'y' || yn == 'Y') {
			cout << "Successfully created!" << endl;
			break;
		} else if (yn == 'n' || yn == 'N') {
			cout << "Application has successfully denied."<<endl;
			cout << "Please write your name again."<<endl;
			cout << "Are you still willing to proceed to your application?(y/n): ";
			cin >> yn;
			cin.ignore();

			if (yn == 'y' || yn == 'Y') {
				continue;
			} else if (yn == 'n' || yn == 'N') {
				cout << "Thank you for using my application!"<<endl;
				return 0;
			}
		}
		else {
			cout << "Please type your name again." << endl;
		}
	}

	return 0;
}

int clear() {

	while (1) {
		char yni; 
		cout << "Clear all of the lines?(y/n): ";
		cin >> yni;
		cin.ignore();

		if (yni == 'y' || yni == 'Y') {
			system("cls");
			break;
		}
		else {
			cout << "Invalid. Please try again." << endl;
		}
	}
	return 0;
}
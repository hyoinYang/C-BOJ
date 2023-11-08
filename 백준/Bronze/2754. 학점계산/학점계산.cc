#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;



int main(void) {

	ios::sync_with_stdio(false);

	string grade;

	cin >> grade;

	if (grade.compare("A+") == 0) { cout << "4.3"; }
	if (grade.compare("A0") == 0) { cout << "4.0"; }
	if (grade.compare("A-") == 0) { cout << "3.7"; }
	if (grade.compare("B+") == 0) { cout << "3.3"; }
	if (grade.compare("B0") == 0) { cout << "3.0"; }
	if (grade.compare("B-") == 0) { cout << "2.7"; }
	if (grade.compare("C+") == 0) { cout << "2.3"; }
	if (grade.compare("C0") == 0) { cout << "2.0"; }
	if (grade.compare("C-") == 0) { cout << "1.7"; }
	if (grade.compare("D+") == 0) { cout << "1.3"; }
	if (grade.compare("D0") == 0) { cout << "1.0"; }
	if (grade.compare("D-") == 0) { cout << "0.7"; }
	if (grade.compare("F") == 0) { cout << "0.0"; }



	return 0;

}
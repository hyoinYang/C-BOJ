#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);

	char test[100] = {};
	string input;

	cin >> input;

	strcpy(test, input.c_str());

	//대문자, 소문자 변환
	for (int i = 0; i < 100; i++) {
		if ('A' <= test[i] && test[i] <= 'Z') {
			test[i] = test[i] - 'A' + 'a';
			cout << test[i];
		}
		else if ('a' <= test[i] && test[i] <= 'z') {
			test[i] = test[i] - 'a' + 'A';
			cout << test[i];
		}
	}

	return 0;

}
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	string id;
	cin >> id;

	if (id.compare(id) == 0) {
		cout << id << "??!";
	}
	return 0;
}
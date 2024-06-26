#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long long n) {
	/* 
	* isPrime 함수의 반환형을 bool 로 변경한 뒤,
	* 아래 주석을 함수 바디로 하면
	* 시간초과가 없습니다.
	* 
	* main 함수의 isPrime 호출 부분을 while(!isPrime)로 변경해야 합니다.
	* 
	*/
	if (n <= 1) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (long long i = 5; i * i <= n; i++) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}

	return true;
	

	/*
	int div = 0;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) div++;
	}

	if (div == 1) return n;
	else return 0;
	*/
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;

		while (!isPrime(n)) {
			n++;
		}
		
		cout << n << "\n";

	}
}
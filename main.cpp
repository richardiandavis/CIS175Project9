//Rich Davis
//10/2/2022
//Project 9

#include <iostream>
using namespace std;

bool isPrime(int x) {
	int y = x / 2;
	for (int i = 2; i <= y; i++) {
		if (x % i == 0) {
			return false;
		}
	}
}

int main() {
	int x;
	cout << "Prime checker!\n\nEnter a whole number: ";
	cin >> x;
	if (isPrime(x)) {
		cout << "That number is prime!";
	}
	else {
		cout << "That number is not prime. :(";
	}

	return 0;
}
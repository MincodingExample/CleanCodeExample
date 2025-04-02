#include <iostream>

int getMinus(int a, int b) {
	return a - b;
}

int getSum(int a, int b) {
	return a + b;
}

int main() {

	std::cout << "HI";
	std::cout << getSum(10, 20) << '\n';
	std::cout << getMinus(10, 20) << '\n';

	return 0;
}

#include <iostream>
int add(int a, int b) {
	return a + b;
}
int main() {
	std::cout << "Sum: " << add(10, 10) << std::endl;
	return 0;
}
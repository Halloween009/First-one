#include <iostream>
#include <string>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russia");
	int i = 10;
	std::cout << i<<std::endl;
}
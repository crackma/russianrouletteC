#include <iostream>
#include <random>

void main() {
	rand() % 1;
	std::random_device dev; // i think this defines a variable
	std::mt19937 rng(dev()); //donno what is is :skull:
	std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 6); // it has something to do with random numbers, trust me
	std::cout << "Enter a number from 1 to 6: \n";
	int victimInput;
	std::cin >> victimInput;
	if (victimInput > 6) {

	}
	system("pause");
}
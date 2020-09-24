#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	
	std::cout << "Give a number and I will output fibonacci" << std::endl;
	
	int number;
	std::cin >> number;
	
	int previous = 1;
	int current = 1;
	for (int i = 0; i < number; i++) {
		int newCurrent = previous + current;
		previous = current;
		current = newCurrent;
	}
	
	std::cout << "The calculated number is: " << current << std::endl;
}
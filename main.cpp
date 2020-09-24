#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	
	std::cout << "Give a number and I will output fibonacci" << std::endl;
	
	int number;
	std::cin >> number;
	
	int previousPrevious = 1;
	int previous = 1;
	int current = 1;
	for (int i = 0; i < number; i++) {
		int newCurrent = previousPrevious + previous + current;
		previousPrevious = previous;
		previous = current;
		current = newCurrent;
	}
	
	std::cout << "The calculated number is: " << current << std::endl;
}
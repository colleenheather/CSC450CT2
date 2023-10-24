//============================================================================
// Name        : ct1 (Critical Thinking 2)
// Author      : Colleen Ammons
// Description : String input console application
// Pseudocode  :	i = 0, i < 3; i ++
//						str input 1
//						str input 2
//						result = input 1 + input 2
//============================================================================

#include <iostream>
#include <string>

int main() {
	std::string input1, input2, result;

	for (int i = 0; i < 3; i++) {
		std::cout << "Enter string 1: ";
		std::getline(std::cin, input1);

		std::cout << "Enter string 2: ";
		std::getline(std::cin,input2);

		result = input1 + " " + input2;
		std::cout << "Concatenation of strings = " << result << std::endl;
	}

	return 0;
}

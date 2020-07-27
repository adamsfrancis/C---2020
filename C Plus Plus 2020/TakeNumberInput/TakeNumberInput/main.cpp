#include <iostream>

//single line comment

/* 
Multiline comment style
Very useful
*/
int main() {
	int favoriteNumber;

	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> favoriteNumber;

	std::cout << "Amazing! " << favoriteNumber << " is my favorite number too!" << std::endl;

	return 0;
}
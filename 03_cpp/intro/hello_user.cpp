#include <iostream>

int main () {
	std::cout << "Please, enter your name: ";
	std::string username;
	std::cin >> username;
	std::cout << "\n Hello, " << username << "!" << std::endl;
	return 0;
}
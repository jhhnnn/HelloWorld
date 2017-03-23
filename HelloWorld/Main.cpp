#include "HelloWorld.h"
#include <iostream>
int main() {
	std::string nimi;
	try {
		HelloWorld terve;
		terve.tulostaHelloWorld();

		std::cout << "\nWhat might be your name?: ";
		
		getline(std::cin, nimi);

		terve.tulostaHelloJollekkin(nimi);
	}
	catch (...) {
		std::cout << "Virhe!" << std::endl;
	}


	std::system("pause");
	return 0;
}
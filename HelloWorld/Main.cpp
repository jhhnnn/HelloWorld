#include "HelloWorld.h"
#include <iostream>
int main() {
	try {
		HelloWorld terve;
		
		terve.asetaNimi();
	}
	catch (...) {
		std::cout << "Virhe!" << std::endl;
	}


	std::system("pause");
	return 0;
}
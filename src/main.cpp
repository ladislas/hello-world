#include <iostream>
#include <unistd.h>

char version[] = "8.0.0";

int main() {

	std::string username = getlogin();

	std::cout
		<< "Hello, " << username << "!\n"
		<< "Version " << version
		<< std::endl;

	return 0;

}


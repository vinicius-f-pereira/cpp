#include <cctype>
#include <cstring>
#include <iostream>
#include <cstdlib>

int	main (int argc, char *argv[]) {
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			std::string str(argv[i]);
			for (size_t len = 0; len < str.size(); len++) {
				str[len] = std::toupper(str[len]);
			}
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return EXIT_SUCCESS;
}
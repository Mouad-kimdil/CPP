#include "sed.hpp"

int main( int ac, char **av ) {
	if (ac != 4) {
		std::cerr << BAD_ARGS << std::endl;
		return (1);
	}
	if (!av[2][0]) {
		std::cerr << EMPTY_STR << std::endl;
		return (1);
	}
	Sed sed(av);
	sed.read_file();
	return (0);
}
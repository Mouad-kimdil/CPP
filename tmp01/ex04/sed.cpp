#include "sed.hpp"

Sed::Sed(char **av) {
	infile.open(av[1]);
	if (!infile.is_open())
	{
		std::cerr << FILE_ERR << std::endl;
		return ;
	}
	if (infile.peek() == std::string::traits_type::eof()) {
		std::cerr << EMPTY_FILE << std::endl;
		return ;
	}
	outfile.open(std::string(av[1]) + ".replace");
	if (!outfile.is_open())
		std::cerr << FILE_ERR << std::endl;
	to_find = std::string(av[2]);
	replace = std::string(av[3]);
}

Sed::~Sed() {
	if (infile.is_open())
		infile.close();
	if (outfile.is_open())
		outfile.close();
}

std::string Sed::replace_line( const std::string &line ) {
	int			pos;
	size_t		found;
	std::string	result;

	pos = 0;
	while ((found = line.find(to_find, pos)) != std::string::npos)
	{
		result += line.substr(pos, found - pos);
		result += replace;
		pos = found + to_find.length();
	}
	result += line.substr(pos);
	return (result);
}

void	Sed::process_line(const std::string &line) {
	outfile << replace_line(line);
}

void	Sed::read_file( void ) {
	std::string	line;

	while (std::getline(infile, line)) {
		if (!infile.eof())
			line += '\n';
		process_line(line);
	}
}

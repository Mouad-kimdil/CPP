#pragma once

#include <iostream>
#include <string>
#include <fstream>

# define BAD_ARGS "Number of parameter must be 4."
# define FILE_ERR "could not open file"
# define EMPTY_FILE "the input file is empty"
# define EMPTY_STR "replacement string could not be empty"

class Sed {
	private:
		std::ifstream   infile;
		std::ofstream   outfile;
		std::string		to_find;
		std::string		replace;
	public:
		Sed( char **av );
		~Sed();
		std::string	replace_line( const std::string &line );
		void		process_line( const std::string &line );
		void		read_file( void );
};
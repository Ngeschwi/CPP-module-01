#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <cstdio>

struct	data
{
	std::string		s1;
	std::string		s2;
	std::string		filename;
	std::string		file_line;
	std::string		file_replace;
	std::ofstream	ofs;
};

#endif
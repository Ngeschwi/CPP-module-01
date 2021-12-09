#include "Replace.hpp"

void	replace(data *data)
{
	std::size_t	found;

	found = data->file_line.find(data->s1);
	while (found != std::string::npos)
	{
		data->file_line.replace(found, data->s2.length(), data->s2);
		found = data->file_line.find(data->s1, found + 1);
	}
	data->ofs << data->file_line << std::endl;
}

void	get_file(data *data)
{
	std::ifstream	ifs;

	ifs.open(data->filename, std::ifstream::in);
	data->ofs.open(data->filename + ".replace", std::ifstream::out);
	if (ifs.is_open())
	{
		while (ifs.good())
		{
			std::getline(ifs, data->file_line);
			replace(data);
		}
	}
	else
		std::cout << "No such file or directory : " << data->filename << std::endl;
}

int	main(int argc, char **argv)
{
	data	data;

	if (argc == 4)
	{
		data.s1 = argv[1];
		data.s2 = argv[2];
		data.filename = argv[3];
		if ((data.s1).size() != 0 && (data.s2).size() != 0 && (data.filename).size() != 0)
			get_file(&data);
	}
	else
	{
		std::cout << "Arguments error" << std::endl;
		return 1;
	}
	return 0;
}
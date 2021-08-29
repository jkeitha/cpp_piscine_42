#include <iostream>
#include <fstream>
#include <string>

struct s_args
{
	std::string	file_name;
	std::string	s1;
	std::string	s2;
};

struct s_file_descriptors
{
	std::fstream	from_file;
	std::ofstream	to_file;
};

void	parse_args(s_args *args, char **argv)
{
	args->file_name = argv[1];
	args->s1 = argv[2];
	args->s2 = argv[3];
}

void	rewrite(s_args &args, s_file_descriptors &file_descriptors)
{
	(void)args;
	std::string	output;

	while (getline(file_descriptors.from_file, output))
	{
		file_descriptors.to_file << output << "\n";
	}
}

int	main(int argc, char **argv)
{
	s_args				args;
	s_file_descriptors	file_descriptors;

	if (argc != 4)
	{
		std::cout << "wrong input\n";
		return 1;
	}
	parse_args(&args, argv);
	file_descriptors.to_file.open("FILENAME.replace");
	file_descriptors.from_file.open("test.txt");
	rewrite(args, file_descriptors);
	file_descriptors.to_file.close();
	file_descriptors.from_file.close();
	return 0;
}

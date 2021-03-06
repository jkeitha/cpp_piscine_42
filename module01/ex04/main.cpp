#include <iostream>
#include <fstream>
#include <string>

#define FILENAME "FILENAME.replace"

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

int	parse_args(s_args *args, int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong input\n";
		return 1;
	}
	args->file_name = argv[1];
	args->s1 = argv[2];
	args->s2 = argv[3];
	return 0;
}

int	open_file_descriptors(s_file_descriptors *file_descriptors, s_args &args)
{
	file_descriptors->from_file.open(args.file_name);
	if (!file_descriptors->from_file.is_open())
	{
		std::cout << "file not opened\n";
		return 1;
	}
	file_descriptors->to_file.open(FILENAME);
	if (!file_descriptors->to_file.is_open())
	{
		std::cout << "file not opened\n";
		return 1;
	}
	return 0;
}

void	close_file_descriptors(s_file_descriptors *file_descriptors)
{
	file_descriptors->from_file.close();
	file_descriptors->to_file.close();
}

std::string	change_output(std::string output, s_args &args)
{
	std::string::size_type	pos_substr;
	const size_t			s1_length = args.s1.length();

	while (1)
	{
		pos_substr = output.find(args.s1);
		if (pos_substr == std::string::npos)
			break ;

		output.erase(pos_substr, s1_length);
		output.insert(pos_substr, args.s2);
	}
	return output;
}

void	rewrite(s_args &args, s_file_descriptors &file_descriptors)
{
	std::string	output;

	while (getline(file_descriptors.from_file, output))
	{
		output = change_output(output, args);
		file_descriptors.to_file << output << "\n";
	}
}

int	main(int argc, char **argv)
{
	s_args				args;
	s_file_descriptors	file_descriptors;

	if (parse_args(&args, argc, argv))
		return 1;

	if (open_file_descriptors(&file_descriptors, args))
		return 1;

	rewrite(args, file_descriptors);

	close_file_descriptors(&file_descriptors);
	return 0;
}

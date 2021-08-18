#include <iostream>

int	is_small_letter(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	return 0;
}

char	small_letter_to_big(int c)
{
	return (c - 32);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
			{
				if (is_small_letter(argv[i][j]))
					std::cout << small_letter_to_big(argv[i][j]);
				else
					std::cout << argv[i][j];
			}
			if (argv[i + 1])
				std::cout << " ";
		}
	}
	return 0;
}

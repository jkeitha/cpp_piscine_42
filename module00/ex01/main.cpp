#include "PhoneBook.hpp"

void	add_new_contact()
{
	std::cout << "ADD NEW CONTACT\n";
}

void	search_contact()
{
	std::cout << "SEARCH CONTACT\n";
}

int	main()
{
	bool		input;
	std::string	str;

	input = true;
	while (input)
	{
		std::cout << "> ";
		std::cin >> str;
		if (str == "ADD")
			add_new_contact();
		if (str == "SEARCH")
			search_contact();
		if (str == "EXIT")
		{
			std::cout << "EXIT\n";
			input = false;
		}
	}
	return 0;
}

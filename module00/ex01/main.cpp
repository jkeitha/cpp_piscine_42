#include "PhoneBook.hpp"

int	main()
{
	bool		input;
	std::string	str;
	PhoneBook	phone_book;

	input = true;
	std::cout << "You can write ADD, SEARCH or EXIT\n";
	while (input)
	{
		std::getline(std::cin, str);
		if (str == "ADD")
			phone_book.add_new_contact();
		if (str == "SEARCH")
			phone_book.search_contacts();
		if (str == "EXIT")
		{
			std::cout << "EXIT\n";
			input = false;
		}
	}
	return 0;
}

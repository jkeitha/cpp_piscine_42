#include "PhoneBook.hpp"

void	PhoneBook::add_new_contact()
{
	std::string	str;

	if (index == 8)
		index = 0;

	contacts_array[index].set_is_empty(1);

	std::cout << "first name" << "\t> ";
	std::getline(std::cin, str);
	contacts_array[index].set_first_name(str);

	std::cout << "last name" << "\t> ";
	std::getline(std::cin, str);
	contacts_array[index].set_last_name(str);

	std::cout << "nickname" << "\t> ";
	std::getline(std::cin, str);
	contacts_array[index].set_nickname(str);

	std::cout << "phone number" << "\t> ";
	std::getline(std::cin, str);
	contacts_array[index].set_phone_number(str);

	std::cout << "darkest secret" << "\t> ";
	std::getline(std::cin, str);
	contacts_array[index].set_darkest_secret(str);

	index += 1;
}

void	phonebook_header()
{
	std::cout << "---------------------------------------------" << "\n";
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << "\n";
	std::cout << "---------------------------------------------" << "\n";
}

void	PhoneBook::search_contacts()
{
	phonebook_header();
}

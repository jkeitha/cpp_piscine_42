#include "PhoneBook.hpp"

void	PhoneBook::add_new_contact()
{
	std::string	str;

	if (index == 8)
		index = 0;

	std::cout << "first name" << "\t> ";
	std::getline(std::cin, str);
	contacts_array[index].set_first_name(str);
	if (str != "")
		contacts_array[index].set_is_empty(1);

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

std::string	str_shortening(std::string str)
{
	std::string	str_short;
	int			i;

	i = 0;
	while (str[i] && i < 9)
	{
		str_short += str[i];
		i++;
	}
	if (i == 9 && str[i])
	{
		if (str[i + 1])
			str_short += '.';
		else
			str_short += str[i];
	}
	return str_short;
}

void	PhoneBook::search_contacts()
{
	int	contact_index;

	phonebook_header();
	contact_index = 0;
	while (contact_index < 8)
	{
		if (contacts_array[contact_index].get_is_empty() == 1)
		{
			std::cout << "|" << std::setw(10) << contact_index + 1 << "|";
			std::cout << std::setw(10) << str_shortening(contacts_array[contact_index].get_first_name()) << "|";
			std::cout << std::setw(10) << str_shortening(contacts_array[contact_index].get_last_name()) << "|";
			std::cout << std::setw(10) << str_shortening(contacts_array[contact_index].get_nickname()) << "|" << "\n";
			std::cout << "---------------------------------------------" << "\n";
		}
		contact_index++;
	}
	std::cout << "contact index: ";
	std::cin >> contact_index;
	std::cin.clear();
	contact_index -= 1;
	if (contact_index >= 0 && contact_index < 8 && contacts_array[contact_index].get_is_empty() == 1)
	{
		std::cout << "first name:" << "\t" << contacts_array[contact_index].get_first_name() << "\n";
		std::cout << "last name:" << "\t" << contacts_array[contact_index].get_last_name() << "\n";
		std::cout << "nickname:" << "\t" << contacts_array[contact_index].get_nickname() << "\n";
		std::cout << "phone number:" << "\t" << contacts_array[contact_index].get_phone_number() << "\n";
		std::cout << "darkest secret:" << "\t" << contacts_array[contact_index].get_darkest_secret() << "\n";
	}
	else
		std::cout << "wrong contact index\n";
}

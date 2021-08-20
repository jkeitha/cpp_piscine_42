#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
	Contact	contacts_array[8];
	int		index;

	public:
	void	add_new_contact();
	void	search_contacts();

	PhoneBook()
	{
		index = 0;
	}
};

#endif

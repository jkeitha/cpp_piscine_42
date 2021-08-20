#include "Contact.hpp"

void		Contact::set_first_name(std::string value)
{
	m_first_name = value;
}

void		Contact::set_last_name(std::string value)
{
	m_last_name = value;
}

void		Contact::set_nickname(std::string value)
{
	m_nickname = value;
}

void		Contact::set_phone_number(std::string value)
{
	m_phone_number = value;
}

void		Contact::set_darkest_secret(std::string value)
{
	m_darkest_secret = value;
}

std::string	Contact::get_first_name()
{
	return m_first_name;
}

std::string	Contact::get_last_name()
{
	return m_last_name;
}

std::string	Contact::get_nickname()
{
	return m_nickname;
}

std::string	Contact::get_phone_number()
{
	return m_phone_number;
}

std::string	Contact::get_darkest_secret()
{
	return m_darkest_secret;
}

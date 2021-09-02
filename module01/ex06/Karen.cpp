#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout << "[DEBUG]\n"
	"I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
	"I just love it!\n";
}

void	Karen::info( void )
{
	std::cout << "[INFO]\n"
	"I cannot believe adding extra bacon "
	"cost more money.\n"
	"You don’t put enough!\n"
	"If you did I would not have to ask for it!\n";
}

void	Karen::warning( void )
{
	std::cout << "[WARNING]\n"
	"I think I deserve to have some extra "
	"bacon for free.\n"
	"I’ve been coming here for years and "
	"you just started working here last month.\n";
}

void	Karen::error( void )
{
	std::cout << "[ERROR]\n"
	"This is unacceptable, I want to speak "
	"to the manager now.\n";
}

void	Karen::complain( std::string level )
{
	void		(Karen::*pointers_to_func_members[4]) ()
	= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	level_type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && level_type[i] != level)
	{
		i++;
	}
	while (i < 4)
	{
		(this->*pointers_to_func_members[i]) ();
		i++;
	}
}

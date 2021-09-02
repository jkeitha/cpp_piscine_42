#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout << "DEBUG:\t\t"
	"I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup "
	"burger. I just love it!\n";
}

void	Karen::info( void )
{
	std::cout << "INFO:\t\t"
	"I cannot believe adding extra bacon "
	"cost more money. You don’t put enough! If you did "
	"I would not have to ask for it!\n";
}

void	Karen::warning( void )
{
	std::cout << "WARNING:\t"
	"I think I deserve to have some extra "
	"bacon for free. I’ve been coming here for years and "
	"you just started working here last month.\n";
}

void	Karen::error( void )
{
	std::cout << "ERROR:\t\t"
	"This is unacceptable, I want to speak "
	"to the manager now.\n";
}

void	Karen::level_not_found( void )
{
	std::cout << "level not found\n";
}

void	Karen::complain( std::string level )
{
	/*
	void	(Karen::*debug_ponter) ();
	debug_ponter = &Karen::debug;
	*/

	/*
	void	(Karen::*debug_ponter) () = &Karen::debug;
	void	(Karen::*info_ponter) () = &Karen::info;
	void	(Karen::*warning_ponter) () = &Karen::warning;
	void	(Karen::*error_ponter) () = &Karen::error;

	if (level == "DEBUG")
		(this->*debug_ponter) ();
	if (level == "INFO")
		(this->*info_ponter) ();
	if (level == "WARNING")
		(this->*warning_ponter) ();
	if (level == "ERROR")
		(this->*error_ponter) ();
	*/

	void		(Karen::*pointers_to_func_members[5]) ()
	= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::level_not_found};
	std::string	level_type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && level_type[i] != level)
	{
		i++;
	}
	(this->*pointers_to_func_members[i]) ();
}

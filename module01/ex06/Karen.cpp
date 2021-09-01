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
	"ERROR:\t\t"
	"This is unacceptable, I want to speak "
	"to the manager now.\n";
}

void	Karen::complain( std::string level )
{
	/*
	void	(Karen::*debug_ponter) ();
	debug_ponter = &Karen::debug;
	*/

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
}

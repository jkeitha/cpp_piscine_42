#include <iostream>
#include <string>

typedef std::string string;

int	main()
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	std::cout << &str << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
	return 0;
}

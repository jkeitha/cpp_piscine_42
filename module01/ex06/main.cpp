#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong input\n";
		return 1;
	}
	Karen	karen_test;

	karen_test.complain(argv[1]);
	return 0;
}

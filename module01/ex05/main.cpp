#include "Karen.hpp"

int	main()
{
	Karen	karen_test;

	karen_test.complain("DEBUG");
	karen_test.complain("INFO");
	karen_test.complain("WARNING");
	karen_test.complain("ERROR");
	karen_test.complain("OOPS");
	karen_test.complain("WRONG_INPUT");
	return 0;
}

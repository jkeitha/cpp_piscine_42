#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
void easyfind(T container, int occurrence) {
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), occurrence);
	if (it != container.end())
		std::cout << *it;
	else
		throw static_cast<std::string>("does not exist");
}

#endif

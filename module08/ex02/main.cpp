#include <iostream>
#include "mutantstack.hpp"

void subject() {

	std::cout << "subject test\n";

	MutantStack <int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::stack<int> s(mstack);

}

void test_copy() {

	std::cout << "test copy constructor and assignment operator\n";

	MutantStack <int> mstack;

	mstack.push(748);

	MutantStack <int> copy_stack(mstack);

	std::cout << "size: " << copy_stack.size() << std::endl;
	std::cout << "top item: " << copy_stack.top() << std::endl;

}

int main() {

	subject();
	std::cout << std::endl;
	test_copy();

	return 0;
}

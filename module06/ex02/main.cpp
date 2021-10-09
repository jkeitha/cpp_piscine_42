#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void) {
	srand((unsigned int)time(0));
	Base *ptr;
	if (rand() % 2 == 0) {
		ptr = new A();
		std::cout << "class A created\n";
	} else if (rand() % 3 == 0) {
		ptr = new B();
		std::cout << "class B created\n";
	} else {
		ptr = new C();
		std::cout << "class C created\n";
	}
	return ptr;
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "class A\n";
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "class B\n";
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "class C\n";
}

void identify(Base &p) {
	char type;
	try {
		A a = dynamic_cast<A&>(p);
		type = 'A';
	} catch (const std::bad_cast &bc) {}
	try {
		B b = dynamic_cast<B&>(p);
		type = 'B';
	} catch (const std::bad_cast &bc) {}
	try {
		C c = dynamic_cast<C&>(p);
		type = 'C';
	} catch (const std::bad_cast &bc) {}
	std::cout << "class " << type << std::endl;
}

int main() {
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return 0;
}

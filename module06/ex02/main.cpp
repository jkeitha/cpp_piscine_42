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
	(void)p;
}

void identify(Base &p) {
	(void)p;
}

int main() {
	Base *ptr = generate();
	delete ptr;
	return 0;
}

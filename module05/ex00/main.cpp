#include "Bureaucrat.hpp"

void test1() {
	std::cout << "default constructor and operator<< test:\n";
	Bureaucrat bureaucrat;
	std::cout << bureaucrat << std::endl;
}

void test7() {
	std::cout << "parameter constructor and operator<< test:\n";
	Bureaucrat bureaucrat(50);
	std::cout << bureaucrat << std::endl;
}

void test2() {
	std::cout << "increment KO test:\n";
	Bureaucrat bureaucrat;
	try {
		bureaucrat.gradeUp();
	} catch (std::exception &e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
}

void test3() {
	std::cout << "decrement OK test:\n";
	Bureaucrat bureaucrat;
	try {
		bureaucrat.gradeDown();
	} catch (std::exception &e) {
		std::cout << "exception: " << e.what() << std::endl;
		return ;
	}
	std::cout << "OK\n";
}

void test4() {
	std::cout << "decrement KO test:\n";
	Bureaucrat bureaucrat(150);
	try {
		bureaucrat.gradeDown();
	} catch (std::exception &e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
}

void test5() {
	std::cout << "wrong init high test:\n";
	try {
		Bureaucrat bureaucrat(0);
	} catch (std::exception &e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
}

void test6() {
	std::cout << "wrong init low test:\n";
	try {
		Bureaucrat bureaucrat(151);
	} catch (std::exception &e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
}

int main() {
	test1();
	std::cout << std::endl;
	test7();
	std::cout << std::endl;
	test2();
	std::cout << std::endl;
	test3();
	std::cout << std::endl;
	test4();
	std::cout << std::endl;
	test5();
	std::cout << std::endl;
	test6();
	return 0;
}

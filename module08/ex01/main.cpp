#include <iostream>
#include "span.hpp"

void subject() {

	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}

void test_addNumber() {

	Span span = Span(1);

	span.addNumber(1);

	try {
		span.addNumber(1);
	} catch (const std::string message) {
		std::cout << "exception: " << message << std::endl;
	}

}

void test_shortest_longest() {

	Span span1 = Span();

	try {
		std::cout << "shortest: " << span1.shortestSpan();
	} catch (const std::string message) {
		std::cout << "exception: " << message;
	}
	std::cout << std::endl;

	Span span2 = Span(1);
	span2.addNumber(1);

	try {
		std::cout << "shortest: " << span2.shortestSpan();
	} catch (const std::string message) {
		std::cout << "exception: " << message;
	}
	std::cout << std::endl;

}

void test_10000() {
	Span span = Span(10000);
}

int main() {
	subject();
	test_addNumber();
	test_shortest_longest();
	test_10000();
	return 0;
}

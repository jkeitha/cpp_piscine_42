#include "span.hpp"

Span::Span() : m_N(0) {}

Span::~Span() {}

Span::Span(const Span &span) {
	*this = span;
}

Span &Span::operator=(const Span &span) {
	if (this == &span)
		return *this;
	m_N = span.getN();
	m_storage = span.getStorage();
	return *this;
}

unsigned int Span::getN() const {
	return m_N;
}

std::vector<int> Span::getStorage() const {
	return m_storage;
}

Span::Span(unsigned int N) : m_N(N) {}

void Span::addNumber(int num) {
	if (m_storage.size() == m_N)
		throw static_cast<std::string>("STORAGE IS FULL");
	else {
		m_storage.push_back(num);
		if (m_N > 1)
			std::sort(m_storage.begin(), m_storage.end());
	}
}

void Span::addNumber(std::vector<int>::iterator begin,
std::vector<int>::iterator end) {
	if (end - begin > m_N)
		throw static_cast<std::string>("HUGE STORAGE");
	else
		std::copy(begin, end, std::back_inserter(m_storage));
}

unsigned int Span::shortestSpan() const {
	createException();
	if (*(m_storage.begin() + 1) > *m_storage.begin())
		return *(m_storage.begin() + 1) - *m_storage.begin();
	else
		return *m_storage.begin() - *(m_storage.begin() + 1);
}

unsigned int Span::longestSpan() const {
	createException();
	if (*(m_storage.end() - 1) > *m_storage.begin())
		return *(m_storage.end() - 1) - *m_storage.begin();
	else
		return *m_storage.begin() - *(m_storage.end() - 1);
}

void Span::createException() const {
	if (m_N == 0)
		throw static_cast<std::string>("STORE IS EMPTY");
	if (m_N == 1)
		throw static_cast<std::string>("STORE CONTAINS ONE VALUE");
}

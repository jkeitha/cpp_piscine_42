#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span {
	private:

	unsigned int m_N;
	std::vector<int> m_storage;

	public:

	Span();
	~Span();
	Span(const Span &span);
	Span &operator=(const Span &span);

	unsigned int getN() const;
	std::vector<int> getStorage() const;

	Span(unsigned int N);

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator begin,
	std::vector<int>::iterator end);

	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	void createException() const;
};

#endif

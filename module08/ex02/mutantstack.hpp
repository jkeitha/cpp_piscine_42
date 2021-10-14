#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template <class T>
class MutantStack : public std::stack<T> {
	public:

	MutantStack();
	virtual ~MutantStack();
	MutantStack(const MutantStack<T> &mutantStack);
	MutantStack<T> &operator=(const MutantStack<T> &mutantStack);

	/*
	** iterators
	*/

};

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <class T>
MutantStack<T>::~MutantStack() {}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &mutantStack) {
	*this = mutantStack;
}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &mutantStack) {
	if (this == &mutantStack)
		return *this;
	std::stack<T>::operator=(mutantStack);
	return *this;
}

#endif

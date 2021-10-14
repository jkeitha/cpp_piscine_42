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

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();

	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator begin() const;
	const_iterator end() const;

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin();
	reverse_iterator rend();

	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator rbegin() const;
	const_reverse_iterator rend() const;

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

/*
** iterators
*/

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return std::stack<T>::c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return std::stack<T>::c.end();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
	return std::stack<T>::c.begin();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
	return std::stack<T>::c.end();
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
	return std::stack<T>::c.rbegin();
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return std::stack<T>::c.rend();
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const {
	return std::stack<T>::c.rbegin();
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const {
	return std::stack<T>::c.rend();
}

#endif

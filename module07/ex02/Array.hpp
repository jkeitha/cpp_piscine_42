#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array {
	private:

	unsigned int m_n;
	T *m_array;

	public:

	Array();
	Array(unsigned int n);
	Array(const Array &array);
	Array &operator=(const Array &array);
	~Array();
	unsigned int size() const;
	T *getArray() const;
	T &operator[](const int index);

	class WrongRange : public std::exception {
		public:

		const char *what() const throw();
	};
};

template <class T>
Array<T>::Array() : m_n(0) {
	std::cout << "default constructor\n";
	try {
		m_array = new T[0];
	} catch (const std::bad_alloc &exception) {
		std::cout << "allocation failed: " << exception.what() << std::endl;
	}
}

template <class T>
Array<T>::Array(unsigned int n) : m_n(n) {
	std::cout << "parameter constructor\n";
	try {
		m_array = new T[m_n]();
	} catch (const std::bad_alloc &exception) {
		std::cout << "allocation failed: " << exception.what() << std::endl;
	}
}

template <class T>
Array<T>::Array(const Array &array) {
	std::cout << "copy constructor\n";
	*this = array;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &array) {
	if (this == &array)
		return *this;
	m_n = array.size();
	delete [] m_array;
	try {
		m_array = new T[m_n];
	} catch (const std::bad_alloc &exception) {
		std::cout << "allocation failed: " << exception.what() << std::endl;
	}
	for (int i = 0; i < static_cast<int>(m_n); i++)
		m_array[i] = array.getArray()[i];
	return *this;
}

template <class T>
unsigned int Array<T>::size() const {
	return m_n;
}

template <class T>
T *Array<T>::getArray() const {
	return m_array;
}

template <class T>
Array<T>::~Array() {
	std::cout << "destructor\n";
	delete [] m_array;
}

template <class T>
T &Array<T>::operator[](const int index) {
	if (index < 0 || index >= static_cast<int>(m_n))
		throw WrongRange();
	return m_array[index];
}

template <class T>
const char *Array<T>::WrongRange::what() const throw() {
	return "wrong range";
}

#endif

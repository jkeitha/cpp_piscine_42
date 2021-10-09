#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cmath>

class Convert {
	private:

	const std::string m_str;

	public:

	Convert();
	~Convert();
	Convert(const Convert &convert);
	Convert &operator=(const Convert &convert);

	Convert(const std::string &str);

	void printChar() const;
	void printInt() const;
	void printFloat() const;
	void printDouble() const;
};

#endif

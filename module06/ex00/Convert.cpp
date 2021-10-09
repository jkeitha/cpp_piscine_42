#include "Convert.hpp"

Convert::Convert() : m_str("default") {}

Convert::~Convert() {}

Convert::Convert(const Convert &convert) {
	*this = convert;
}

Convert &Convert::operator=(const Convert &convert) {
	if (this == &convert)
		return *this;
	return *this;
}

Convert::Convert(const std::string &str) : m_str(str) {}

void Convert::printChar() const {
	double main_type;
	try {
		main_type = std::stod(m_str);
	} catch (std::exception &e) {
		throw "impossible";
	}
	if (std::isnan(main_type) || std::isinf(main_type))
		throw "impossible";
	if (main_type < 32 || main_type > 126)
		throw "Non displayable";
	std::cout << "'" << static_cast<char>(main_type) << "'" << std::endl;
}

void Convert::printInt() const {
	double main_type;
	try {
		main_type = std::stod(m_str);
	} catch (std::exception &e) {
		throw "impossible";
	}
	if (std::isnan(main_type) || std::isinf(main_type))
		throw "impossible";
	if (main_type > INT_MAX || main_type < INT_MIN)
		throw "wrong <int> range";
	std::cout << static_cast<int>(main_type) << std::endl;
}

void Convert::printFloat() const {
	double main_type;
	try {
		main_type = std::stod(m_str);
	} catch (std::exception &e) {
		throw "impossible";
	}
	std::cout << static_cast<float>(main_type) << "f\n";
}

void Convert::printDouble() const {
	double main_type;
	try {
		main_type = std::stod(m_str);
	} catch (std::exception &e) {
		throw "impossible";
	}
	std::cout << main_type << std::endl;
}

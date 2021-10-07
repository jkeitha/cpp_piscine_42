#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:

	const std::string m_name;
	bool m_sign;
	const int m_gradeSign;
	const int m_gradeExec;

	public:

	const std::string getName() const;
	bool getSign() const;
	int getGradeSign() const;
	int getGradeExec() const;

	class GradeTooHighException : public std::exception {
		public:

		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:

		const char *what() const throw();
	};

	Form();
	Form(const std::string name, bool sign, const int gradeSign, const int gradeExec);

	void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif

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
	const std::string m_target;

	public:

	const std::string getName() const;
	bool getSign() const;
	int getGradeSign() const;
	int getGradeExec() const;
	const std::string getTarget() const;

	void beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception {
		public:

		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:

		const char *what() const throw();
	};

	class UnSign : public std::exception {
		public:

		const char *what() const throw();
	};

	Form();
	virtual ~Form();
	Form(const std::string name, bool sign, const int gradeSign,
	const int gradeExec, const std::string target);
	Form(const Form &form);
	Form &operator=(const Form &form);

	void execute(const Bureaucrat &executor) const;
	virtual void action() const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif

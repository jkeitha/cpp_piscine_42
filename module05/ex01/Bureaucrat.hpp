#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:

	const std::string m_name;
	int m_grade;

	public:

	const std::string getName() const;
	int getGrade() const;

	class GradeTooHighException : public std::exception {
		public:

		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:

		const char *what() const throw();
	};

	void gradeUp();
	void gradeDown();

	Bureaucrat(int grade);
	Bureaucrat();
	~Bureaucrat();

	void signForm(const Form &form);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif

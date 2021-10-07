#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	private:

	const std::string m_name;
	int m_grade;

	public:

	const std::string getName() const;
	int getGrade() const;

	const std::string GradeTooHighException() const;
	const std::string GradeTooLowException() const;

	void gradeUp();
	void gradeDown();

	Bureaucrat(int grade);
	Bureaucrat();
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif

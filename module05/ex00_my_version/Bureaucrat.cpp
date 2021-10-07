#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	std::cout <<
	bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

const std::string Bureaucrat::getName() const { return m_name; }

int Bureaucrat::getGrade() const { return m_grade; }

const std::string Bureaucrat::GradeTooHighException() const { return "too high"; }

const std::string Bureaucrat::GradeTooLowException() const { return "too low"; }

void Bureaucrat::gradeUp() {
	m_grade -= 1;
	if (m_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::gradeDown() {
	m_grade += 1;
	if (m_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(int grade) : m_name("Stiv") {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	m_grade = grade;
}

Bureaucrat::Bureaucrat() : m_name("Stiv"), m_grade(1) {}

Bureaucrat::~Bureaucrat() {}

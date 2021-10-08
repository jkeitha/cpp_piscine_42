#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	std::cout <<
	bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

const std::string Bureaucrat::getName() const { return m_name; }

int Bureaucrat::getGrade() const { return m_grade; }

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

const char *Bureaucrat::GradeTooHighException::what() const throw() { return "too high"; }

const char *Bureaucrat::GradeTooLowException::what() const throw() { return "too low"; }

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) :
m_name(bureaucrat.getName()), m_grade(bureaucrat.getGrade()) {
	// copy constructor
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this == &bureaucrat)
		return *this;
	m_grade = bureaucrat.getGrade();
	return *this;
}

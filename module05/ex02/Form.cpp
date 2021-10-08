#include "Form.hpp"

std::ostream &operator<<(std::ostream &os, const Form &form) {
	std::cout
	<< "name: " << form.getName() << std::endl
	<< "sign: " << form.getSign() << std::endl
	<< "signGrade: " << form.getGradeSign() << std::endl
	<< "signExec: " << form.getGradeExec()
	<< "target:" << form.getTarget();
	return os;
}

const std::string Form::getName() const { return m_name; }

bool Form::getSign() const { return m_sign; }

int Form::getGradeSign() const { return m_gradeSign; }

int Form::getGradeExec() const { return m_gradeExec; }

const std::string Form::getTarget() const { return m_target; }

const char *Form::GradeTooHighException::what() const throw() { return "too high"; }

const char *Form::GradeTooLowException::what() const throw() { return "too low"; }

const char *Form::UnSign::what() const throw() { return "unsign"; }

Form::Form() : m_name("default"), m_sign(0), m_gradeSign(1), m_gradeExec(1), m_target("default") {}

Form::~Form() {}

Form::Form(const std::string name, bool sign,
const int gradeSign, const int gradeExec, const std::string target) : m_name(name),
m_sign(sign), m_gradeSign(gradeSign), m_gradeExec(gradeExec), m_target(target) {
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &form) :
m_name(form.getName()), m_sign(form.getSign()),
m_gradeSign(form.getGradeSign()), m_gradeExec(form.getGradeExec()) {
	// copy constructor
	*this = form;
}

Form &Form::operator=(const Form &form) {
	if (this == &form)
		return *this;
	m_sign = form.getSign();
	return *this;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() >= m_gradeSign)
		m_sign = 1;
}

void Form::execute(const Bureaucrat &executor) const {
	if (!getSign())
		throw UnSign();
	if (executor.getGrade() < m_gradeExec)
		throw GradeTooLowException();
	action();
}

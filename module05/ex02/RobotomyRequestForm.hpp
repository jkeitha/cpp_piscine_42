#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:

	RobotomyRequestForm();
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyRequestForm);
	RobotomyRequestForm(const std::string &target);

	private:
	void action() const;
};

#endif

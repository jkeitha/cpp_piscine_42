#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm) {
	*this = robotomyRequestForm;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm) {
	if (this == &robotomyRequestForm)
		return *this;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 0, 72, 45, target) {}

void RobotomyRequestForm::action() const {
	std::cout << "noise noise noise\n";
	srand((unsigned int)time(0));
	if (rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized successfully 50\% of the time\n";
	else
		std::cout << this->getTarget() << ": error\n";
}

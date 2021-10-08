#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm) {
	*this = presidentialPardonForm;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm) {
	if (this == &presidentialPardonForm)
		return *this;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 0, 25, 5, target) {}

void PresidentialPardonForm::action() const {
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox\n";
}

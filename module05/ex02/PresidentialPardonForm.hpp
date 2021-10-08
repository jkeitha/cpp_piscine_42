#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:

	PresidentialPardonForm();
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialPardonForm);
	PresidentialPardonForm(const std::string &target);

	private:
	void action() const;
};

#endif

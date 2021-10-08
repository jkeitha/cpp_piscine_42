#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:

	ShrubberyCreationForm();
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberyCreationForm);
	ShrubberyCreationForm(const std::string &target);

	private:
	void action() const;
};

#endif

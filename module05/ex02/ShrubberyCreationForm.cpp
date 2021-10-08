#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm) {
	*this = shrubberyCreationForm;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm) {
	if (this == &shrubberyCreationForm)
		return *this;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 0, 145, 137, target) {}

void ShrubberyCreationForm::action() const {
	std::cout << "<target>_shrubbery\n";
	std::ofstream fd;
	fd.open(this->getTarget() + "_shrubbery");
	if (!fd.is_open())
		std::cout << "error\n";
	else
		fd << "ASCII three\n";
}

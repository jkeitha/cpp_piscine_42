#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat bureaucrat(149);
	ShrubberyCreationForm scf("home");
	bureaucrat.executeForm(scf); // try catch (not signed)
	scf.beSigned(bureaucrat); // sign
	bureaucrat.executeForm(scf);

	RobotomyRequestForm rrf("tank");
	rrf.beSigned(bureaucrat);
	bureaucrat.executeForm(rrf);

	PresidentialPardonForm ppf("Earth");
	ppf.beSigned(bureaucrat);
	bureaucrat.executeForm(ppf);
	return 0;
}

#include <iostream>
#include "../incl/Bureaucrat.hpp"
#include "../incl/AForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/Intern.hpp"

void	assignement_constructor_test()
{
	Intern	i;
	Bureaucrat	b(1);
	Bureaucrat	b1;
	AForm*	scf;
	AForm*	rrf;
	AForm*	ppf;
	AForm*	not_valid;

	try
	{
		scf = i.makeForm("shrubbery creation", "Help");
		std::cout << "Shrubbery creation form : " << *scf << std::endl;
		rrf = i.makeForm("robotomy request", "Bender");
		std::cout << "Robotomoy request form : " << *rrf << std::endl;
		ppf = i.makeForm("presidential pardon", "pardon_me");
		std::cout << "Presidential pardon form : " << *ppf << std::endl;
		not_valid = i.makeForm("helloworld", "not_valid");
		std::cout << "Not valid form : " << not_valid << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	std::cout << std::endl << "*** Signing ***" << std::endl;
	b1.signAForm(*scf);
	b1.signAForm(*rrf);
	b1.signAForm(*ppf);
	b.signAForm(*scf);
	b.signAForm(*rrf);
	b.signAForm(*ppf);

	std::cout << std::endl << "*** Executions ***" << std::endl;
	b1.executeForm(*scf);
	b1.executeForm(*rrf);
	b1.executeForm(*ppf);
	b.executeForm(*scf);
	b.executeForm(*rrf);
	b.executeForm(*ppf);

	delete scf;
	delete rrf;
	delete ppf;
}

int main()
{
	assignement_constructor_test();
	return 0;
}
#include <iostream>
#include "../incl/Bureaucrat.hpp"
#include "../incl/AForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/Intern.hpp"

void	assignement_constructor_test()
{
	Intern	i1;
	AForm*	scf;
	AForm*	rrf;
	AForm*	ppf;
	AForm*	not_valid;

	try
	{
		scf = i1.makeForm("shrubbery creation", "Help");
		std::cout << "Shrubbery creation form : " << *scf << std::endl;
		rrf = i1.makeForm("robotomy request", "Bender");
		std::cout << "Robotomoy request form : " << *rrf << std::endl;
		ppf = i1.makeForm("presidential pardon", "pardon_me");
		std::cout << "Presidential pardon form : " << *ppf << std::endl;
		not_valid = i1.makeForm("helloworld", "not_valid");
		std::cout << "Not valid form : " << not_valid << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception making form : ";
		std::cerr << e.what() << std::endl << WHITE;
	}

	delete scf;
	delete rrf;
	delete ppf;
}

int main()
{
	assignement_constructor_test();
	return 0;
}
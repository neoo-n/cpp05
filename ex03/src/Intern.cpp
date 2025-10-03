
#include "../incl/Intern.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Intern::Intern()
{
    std::cout << BLUE << "Default Intern constructor called" << WHITE << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	(void)cpy;
    std::cout << BLUE << "Copy Intern constructor called" << WHITE << std::endl;
}

Intern::~Intern()
{
    std::cout << YELLOW << "Destructor Intern called" << WHITE << std::endl;
}

Intern &Intern::operator=(const Intern &obj)
{
	(void)obj;
	std::cout << PINK << "Assignment Intern called" << WHITE << std::endl;
	return (*this);
}

// ------------------------------- METHODS -------------------------------------
AForm	*Intern::makeForm(const std::string name_form, const std::string target_form)
{
	int	i = 0;
	std::string	names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	while (i < 4)
	{
		if (name_form == names[i])
			break ;
		i++;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << names[i] << std::endl;
		return new ShrubberyCreationForm(target_form);
	case 1:
		std::cout << "Intern creates " << names[i] << std::endl;
		return new RobotomyRequestForm(target_form);
	case 2:
		std::cout << "Intern creates " << names[i] << std::endl;
		return new PresidentialPardonForm(target_form);
	default:
		throw NoProvidedFormName();
	}
}

// --------------------------------- EXCEPTIONS -----------------------------------------
const char*	Intern::NoProvidedFormName::what() const throw()
{
	return "There is no form with this name. Try with \"shrubbery creation\", \"robotomy request\" or \"presidential pardon\".";
}
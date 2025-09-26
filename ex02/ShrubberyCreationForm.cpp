
#include "ShrubberyCreationForm.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("schrubbery", 145, 137), _target("default")
{
    std::cout << BLUE << "Default ShrubberyCreationForm constructor called" << WHITE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)
: AForm(cpy.getName(), cpy.getGradeSign(), cpy.getGradeExecute()), _target(cpy._target)
{
    std::cout << BLUE << "Copy ShrubberyCreationForm constructor called" << WHITE << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << YELLOW << "Destructor ShrubberyCreationForm called" << WHITE << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
		this->setSigned(obj.getSigned));
	}
	return (*this);
	std::cout << PINK << "Assignment ShrubberyCreationForm called" << WHITE << std::endl;
}



#include "../incl/PresidentialPardonForm.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

PresidentialPardonForm::PresidentialPardonForm()
: AForm("presidential", 25, 5), _target("default")
{
    std::cout << BLUE << "Default PresidentialPardonForm constructor called" << WHITE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
: AForm(cpy.getName(), cpy.getGradeSign(), cpy.getGradeExecute()), _target(cpy._target)
{
    std::cout << BLUE << "Copy PresidentialPardonForm constructor called" << WHITE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
: AForm("presidential", 25, 5), _target(target)
{
    std::cout << BLUE << "Name PresidentialPardonForm constructor called" << WHITE << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << YELLOW << "Destructor PresidentialPardonForm called" << WHITE << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
		this->setSigned(obj.getSigned());
	}
	return (*this);
	std::cout << PINK << "Assignment PresidentialPardonForm called" << WHITE << std::endl;
}

// ------------------------------- METHODS -------------------------------------
void	PresidentialPardonForm::execution() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
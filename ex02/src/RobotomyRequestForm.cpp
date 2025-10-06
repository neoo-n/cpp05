
#include "../incl/RobotomyRequestForm.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

RobotomyRequestForm::RobotomyRequestForm()
: AForm("robotomy request", 72, 45), _target("default")
{
    std::cout << BLUE << "Default RobotomyRequestForm constructor called" << WHITE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
: AForm(cpy.getName(), cpy.getGradeSign(), cpy.getGradeExecute()), _target(cpy._target)
{
    std::cout << BLUE << "Copy RobotomyRequestForm constructor called" << WHITE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: AForm("robotomy request", 72, 45), _target(target)
{
    std::cout << BLUE << "Name RobotomyRequestForm constructor called" << WHITE << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << YELLOW << "Destructor RobotomyRequestForm called" << WHITE << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
		this->setSigned(obj.getSigned());
	}
	return (*this);
	std::cout << PINK << "Assignment RobotomyRequestForm called" << WHITE << std::endl;
}

// ------------------------------- METHODS -------------------------------------
void	RobotomyRequestForm::execution() const
{
	int	i;
	srand(time(0));
	i = rand() % 2;
	std::cout << "*** MAKE SOME DRILLING NOISES ***" << std::endl;
	if (i)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy on " << this->_target << " has failed." << std::endl;
}

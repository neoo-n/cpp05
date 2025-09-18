
#include "Bureaucrat.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Bureaucrat::Bureaucrat()
: name("default"), grade(150)
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
: name(cpy.name), grade(cpy.grade)
{
    std::cout << "Copy Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		this->grade = obj.grade;
	}
	std::cout << "Assignment Bureaucrat called" << std::endl;
}

// -------------------------------- GET ----------------------------------------
std::string const	&Bureaucrat::getName() const
{
	return (this->name);
}

int const			&Bureaucrat::getGrade() const
{
	return (this->grade);
}

// ------------------------------- METHODS -------------------------------------
int	Bureaucrat::increment()
{
	if (this->grade > 1)
		this->grade--;
	else
		throw ;
}

int	Bureaucrat::decrement()
{
	if (this->grade < 150)
		this->grade++;
	else
		throw ;
}
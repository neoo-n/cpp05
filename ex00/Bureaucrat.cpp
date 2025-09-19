
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

Bureaucrat::Bureaucrat(int grade)
: name("default")
{
	try
	{
		if (grade >= 1 && grade <= 150)
			this->grade = grade;
		else if (grade > 150)
			throw GradeTooLowException();
		else
			throw GradeTooHighException();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Grade assignement Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
: name(name)
{
	try
	{
		if (grade >= 1 && grade <= 150)
			this->grade = grade;
		else if (grade > 150)
			throw GradeTooLowException();
		else
			throw GradeTooHighException();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Grade assignement Bureaucrat constructor called" << std::endl;
	std::cout << "Name assignement Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
: name(name)
{
	std::cout << "Name and Grade assignement Bureaucrat constructor called" << std::endl;
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
	return (*this);
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
void	Bureaucrat::increment()
{
	try
	{
		if (this->grade > 1)
			this->grade--;
		else
			throw GradeTooHighException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

void	Bureaucrat::decrement()
{
	try
	{
		if (this->grade < 150)
			this->grade++;
		else
			throw GradeTooLowException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
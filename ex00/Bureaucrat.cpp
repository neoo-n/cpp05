
#include "Bureaucrat.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Bureaucrat::Bureaucrat()
: _name("default"), _grade(150)
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
: _name(cpy._name), _grade(cpy._grade)
{
    std::cout << "Copy Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade)
: _name("default")
{
	try
	{
		if (grade >= 1 && grade <= 150)
			this->_grade = grade;
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << "\033[0;31m" << "Exception with " << this->_name << " : ";
		std::cerr << e.what() << "\033[0m" << std::endl;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << "\033[0;31m" << "Exception with " << this->_name << " : ";
		std::cerr << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "Grade assignement Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name)
: _name(name), _grade(150)
{
	std::cout << "Name assignement Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name)
{
	try
	{
		if (grade >= 1 && grade <= 150)
			this->_grade = grade;
		else if (grade > 150)
			throw GradeTooLowException();
		else
			throw GradeTooHighException();
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << "\033[0;31m" << "Exception with " << this->_name << " : ";
		std::cerr << e.what() << "\033[0m" << std::endl;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << "\033[0;31m" << "Exception with " << this->_name << " : ";
		std::cerr << e.what() << "\033[0m" << std::endl;
	}
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
		this->_grade = obj._grade;
	}
	std::cout << "Assignment Bureaucrat called" << std::endl;
	return (*this);
}

// -------------------------------- GET ----------------------------------------
std::string const	&Bureaucrat::getName() const
{
	return (this->_name);
}

int const			&Bureaucrat::getGrade() const
{
	return (this->_grade);
}

// ------------------------------- METHODS -------------------------------------
void	Bureaucrat::increment()
{
	try
	{
		if (this->_grade > 1)
			this->_grade--;
		else
			throw GradeTooHighException();
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << "\033[0;31m" << "Exception with " << this->_name << " : ";
		std::cerr << e.what() << "\033[0m" << std::endl;
	}	
}

void	Bureaucrat::decrement()
{
	try
	{
		if (this->_grade < 150)
			this->_grade++;
		else
			throw GradeTooLowException();
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << "\033[0;31m" << "Exception with " << this->_name << " : ";
		std::cerr << e.what() << "\033[0m" << std::endl;
	}
}

// --------------------------------- EXCEPTIONS -----------------------------------------
const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "You can't have a grade this high.";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "You can't have a grade this low.";
}

// -------------------------------- OUT FUNCTIONS ---------------------------------------
std::ostream	&operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}

#include "../incl/Bureaucrat.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Bureaucrat::Bureaucrat()
: _name("default"), _grade(150)
{
    std::cout << BLUE << "Default Bureaucrat constructor called" << std::endl << WHITE;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
: _name(cpy._name), _grade(cpy._grade)
{
    std::cout << BLUE << "Copy Bureaucrat constructor called" << std::endl << WHITE;
}

Bureaucrat::Bureaucrat(int grade)
: _name("default")
{
	if (grade >= 1 && grade <= 150)
		this->_grade = grade;
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		throw Bureaucrat::GradeTooHighException();
	std::cout << BLUE << "Grade assignement Bureaucrat constructor called" << std::endl << WHITE;
}

Bureaucrat::Bureaucrat(std::string name)
: _name(name), _grade(150)
{
	std::cout << BLUE << "Name assignement Bureaucrat constructor called" << std::endl << WHITE;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name)
{
	if (grade >= 1 && grade <= 150)
		this->_grade = grade;
	else if (grade > 150)
		throw GradeTooLowException();
	else
		throw GradeTooHighException();
	std::cout << BLUE << "Name and Grade assignement Bureaucrat constructor called" << std::endl << WHITE;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << YELLOW << "Destructor Bureaucrat called" << std::endl << WHITE;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		this->_grade = obj.getGrade();
	}
	std::cout << PINK << "Assignment Bureaucrat called" << std::endl << WHITE;
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
	if (this->_grade > 1)
		this->_grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrement()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::signAForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout <<  this->_name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << this->getName() << " couldn't sign " << f.getName();
		std::cerr << " because " << e.what() << std::endl << WHITE;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	form.execute(*this);
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
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

// ------------------------------ OUT FUNCTIONS -------------------------------------
std::ostream	&operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}

#include "Form.hpp"

Form::Form()
: _name("default"), _signed(false), _grade_sign(1), _grade_execute(1)
{
    std::cout << BLUE << "Default Form constructor called" << std::endl << WHITE;
}

Form::Form(const Form &cpy)
: _name(cpy._name), _signed(cpy._signed), _grade_sign(cpy._grade_sign), _grade_execute(cpy._grade_execute)
{
    std::cout << BLUE << "Copy Form constructor called" << std::endl << WHITE;
}
	
Form::Form(const std::string name)
: _name(name), _signed(false), _grade_sign(1), _grade_execute(1)
{
	std::cout << BLUE << "Name assignement Form constructor called" << std::endl << WHITE;
}

Form::Form(const int grade_sign)
: _name("default"), _signed(false), _grade_sign(grade_sign), _grade_execute(1)
{
	if (grade_sign < 1)
		throw	GradeTooHighException();
	else if (grade_sign > 150)
		throw GradeTooLowException();
	std::cout << BLUE << "Grade assignement Form constructor called" << std::endl << WHITE;
}

Form::Form(const std::string name, const int grade_sign)
: _name(name), _signed(false), _grade_sign(grade_sign),_grade_execute(1)
{
	if (grade_sign < 1)
		throw	GradeTooHighException();
	else if (grade_sign > 150)
		throw GradeTooLowException();
	std::cout << BLUE << "Name and Grade assignement Form constructor called" << std::endl << WHITE;
}

Form::~Form()
{
    std::cout << YELLOW << "Destructor Form called" << std::endl << WHITE;
}

Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
	{
		this->_signed = obj._signed;
	}
	std::cout << PINK << "Assignment Form called" << std::endl << WHITE;
	return (*this);

}

// -------------------------------- GET ----------------------------------------
std::string const	&Form::getName() const
{
	return (this->_name);
}

bool const			&Form::getSigned() const
{
	return (this->_signed);
}

int const			&Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int const			&Form::getGradeExecute() const
{
	return (this->_grade_execute);
}

// ------------------------------- METHODS -------------------------------------
void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_grade_sign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

// --------------------------------- EXCEPTIONS -----------------------------------------
const char* Form::GradeTooHighException::what() const throw()
{
	return "The grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "The grade is too low.";
}

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------
std::ostream	&operator<<(std::ostream &os, const Form &f)
{
	std::string	is_signed;
	if (f.getSigned())
		is_signed = "yes";
	else
		is_signed = "no";
	os << "Informations for the form " << f.getName() << " :" << std::endl
		<< "Signed : " << is_signed << std::endl
		<< "Grade to sign : " << f.getGradeSign() << std::endl
		<< "Grade to execute : " << f.getGradeExecute();
	return (os);
}

#include "Form.hpp"

Form::Form()
: _name("default"), _signed(false), _grade_sign(1), _grade_execute(1)
{
    std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const Form &cpy)
: _name(cpy._name), _signed(cpy._signed), _grade_sign(cpy._grade_sign), _grade_execute(cpy._grade_execute)
{
    std::cout << "Copy Form constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor Form called" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
	{
		this->_signed = obj._signed;
	}
	std::cout << "Assignment Form called" << std::endl;
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
	try
	{
		if (b.getGrade() <= this->_grade_sign)
			this->_signed = true;
		else
			throw GradeTooLowException();
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << "\033[0;31m" << "Exception with form " << this->_name << " : ";
		std::cerr << e.what() << "\033[0m" << std::endl;
	}
	
}

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------
std::ostream	&operator<<(std::ostream &os, const Form &f)
{
	os << "Informations for the form " << f.getName() << " :" << std::endl
		<< "Signed : " << f.getSigned() << std::endl
		<< "Grade to sign : " << f.getGradeSign() << std::endl
		<< "Gradde to execute : " << f.getGradeExecute();
	return (os);
}
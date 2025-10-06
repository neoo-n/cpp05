
#include "../incl/AForm.hpp"

AForm::AForm()
: _name("default"), _signed(false), _grade_sign(1), _grade_execute(1)
{
    std::cout << BLUE << "Default AForm constructor called" << std::endl << WHITE;
}

AForm::AForm(const AForm &cpy)
: _name(cpy._name), _signed(cpy._signed), _grade_sign(cpy._grade_sign), _grade_execute(cpy._grade_execute)
{
    std::cout << BLUE << "Copy AForm constructor called" << std::endl << WHITE;
}
	
AForm::AForm(const std::string name)
: _name(name), _signed(false), _grade_sign(1), _grade_execute(1)
{
	std::cout << BLUE << "Name assignement AForm constructor called" << std::endl << WHITE;
}

AForm::AForm(const int grade_sign)
: _name("default"), _signed(false), _grade_sign(grade_sign), _grade_execute(1)
{
	if (grade_sign < 1)
		throw	GradeTooHighException();
	else if (grade_sign > 150)
		throw GradeTooLowException();
	std::cout << BLUE << "Grade assignement AForm constructor called" << std::endl << WHITE;
}

AForm::AForm(const std::string name, const int grade_sign)
: _name(name), _signed(false), _grade_sign(grade_sign),_grade_execute(1)
{
	if (grade_sign < 1)
		throw	GradeTooHighException();
	else if (grade_sign > 150)
		throw GradeTooLowException();
	std::cout << BLUE << "Name and Grade assignement AForm constructor called" << std::endl << WHITE;
}

AForm::AForm(const std::string name, const int grade_sign, const int grade_execute)
: _name(name), _signed(false), _grade_sign(grade_sign),_grade_execute(grade_execute)
{
	if (grade_sign < 1 || grade_sign < 1)
		throw	GradeTooHighException();
	else if (grade_sign > 150 || grade_execute > 150)
		throw GradeTooLowException();
	std::cout << BLUE << "Name and Grades assignement AForm constructor called" << std::endl << WHITE;
}

AForm::~AForm()
{
    std::cout << YELLOW << "Destructor AForm called" << std::endl << WHITE;
}

AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
	{
		this->_signed = obj._signed;
	}
	std::cout << PINK << "Assignment AForm called" << std::endl << WHITE;
	return (*this);

}

// ------------------------------ GET & SET ------------------------------------
std::string const	&AForm::getName() const
{
	return (this->_name);
}

bool const			&AForm::getSigned() const
{
	return (this->_signed);
}

int const			&AForm::getGradeSign() const
{
	return (this->_grade_sign);
}

int const			&AForm::getGradeExecute() const
{
	return (this->_grade_execute);
}

void				AForm::setSigned(const bool new_signed)
{
	this->_signed = new_signed;
}

// ------------------------------- METHODS -------------------------------------
void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_grade_sign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed)
	{
		if (executor.getGrade() <= this->_grade_execute)
			this->execution();
		else
			throw GradeTooLowException();
	}
	else
		throw FormNotSigned();
}

// --------------------------------- EXCEPTIONS -----------------------------------------
const char* AForm::GradeTooHighException::what() const throw()
{
	return "The grade is too high.";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "The grade is too low.";
}

const char*	AForm::FormNotSigned::what() const throw()
{
	return "The form is not signed.";
}

// ------------------------------ OUT FUNCTIONS -------------------------------------
std::ostream	&operator<<(std::ostream &os, const AForm &f)
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
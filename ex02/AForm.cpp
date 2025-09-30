
#include "AForm.hpp"

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
	try
	{
		if (grade_sign < 1)
			throw	GradeTooHighException();
		else if (grade_sign > 150)
			throw GradeTooLowException();
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << RED << "Exception with form " << this->_name << " : ";
		std::cerr << e.what() << std::endl << WHITE;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << RED << "Exception with form " << this->_name << " : ";
		std::cerr << e.what() << std::endl << WHITE;
	}
}

AForm::AForm(const std::string name, const int grade_sign)
: _name(name), _signed(false), _grade_sign(grade_sign),_grade_execute(1)
{
	try
	{
		if (grade_sign < 1)
			throw	GradeTooHighException();
		else if (grade_sign > 150)
			throw GradeTooLowException();
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << RED << "Exception with form " << this->_name << " : ";
		std::cerr << e.what() << std::endl << WHITE;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << RED << "Exception with form " << this->_name << " : ";
		std::cerr << e.what() << std::endl << WHITE;
	}
}

AForm::AForm(const std::string name, const int grade_sign, const int grade_execute)
: _name(name), _signed(false), _grade_sign(grade_sign),_grade_execute(grade_execute)
{
	try
	{
		if (grade_sign < 1 || grade_sign < 1)
			throw	GradeTooHighException();
		else if (grade_sign > 150 || grade_execute > 150)
			throw GradeTooLowException();
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << RED << "Exception with form " << this->_name << " : ";
		std::cerr << e.what() << std::endl << WHITE;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << RED << "Exception with form " << this->_name << " : ";
		std::cerr << e.what() << std::endl << WHITE;
	}
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
	try
	{
		if (b.getGrade() <= this->_grade_sign)
			this->_signed = true;
		else
			throw GradeTooLowException();
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << RED << "Exception with form " << this->_name << " : ";
		std::cerr << e.what() << std::endl << WHITE;
	}
	
}

void	AForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->_signed)
		{
			if (executor.getGrade() <= this->_grade_execute)
				execution;
			else
				throw GradeTooLowException();
		}
		else
			throw FormNotSigned();
	}
	catch(FormNotSigned& e)
	{
		std::cerr << RED << "Exception for form " << this->_name << " execution" << std::endl;
		std::cerr << e.what() << std::endl << WHITE;
	}
	
}

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------
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
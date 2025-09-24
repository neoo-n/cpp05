
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

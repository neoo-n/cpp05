
#include "Form.hpp"

Form::Form()
:
{
    std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const Form &other)
:
{
    std::cout << "Copy Form constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor Form called" << std::endl;
}

Form &Form::operator=(const Form &obj)
{

}



#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
    private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_execute;

    public:
        Form(void);
        Form(const Form&other);
        ~Form(void);
        Form &operator=(const Form&obj);
};

#endif

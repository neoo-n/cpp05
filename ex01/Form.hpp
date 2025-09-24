
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
    private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_execute;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what(){return "The grade is too high.";}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() {return "The grade is too low.";}
		};

    public:
        Form(void);
        Form(const Form &cpy);
        ~Form(void);
        Form &operator=(const Form &obj);

		std::string const	&getName() const;
		bool const			&getSigned() const;
		int const 			&getGradeSign() const;
		int const			&getGradeExecute() const;

		void	beSigned(const Bureaucrat &b);
};

std::ostream	&operator<<(std::ostream &os, const Form &f);

#endif


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

class	Bureaucrat;

class	Form
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
		Form(const std::string name);
		Form(const int grade_sign);
		Form(const std::string name, const int grade_sign);
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

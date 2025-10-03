
#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include "Bureaucrat.hpp"

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

class	Bureaucrat;

class	AForm
{
    private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_execute;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	FormNotSigned : public std::exception
		{
			public:
				const char*	what() const throw();
		};

    public:
        AForm(void);
        AForm(const AForm &cpy);
		AForm(const std::string name);
		AForm(const int grade_sign);
		AForm(const std::string name, const int grade_sign);
		AForm(const std::string name, const int grade_sign, const int grade_execute);
		virtual ~AForm(void);
        AForm &operator=(const AForm &obj);

		std::string const	&getName() const;
		bool const			&getSigned() const;
		int const 			&getGradeSign() const;
		int const			&getGradeExecute() const;
		void				setSigned(bool new_signed);

		void	beSigned(const Bureaucrat &b);
		void	execute(Bureaucrat const & executor) const;
		virtual void	execution() const = 0;
};

std::ostream	&operator<<(std::ostream &os, const AForm &f);

#endif

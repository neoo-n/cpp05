
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
		const std::string	_name;
		int					_grade;

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

    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat(int grade);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &obj);

		std::string const&	getName() const;
		int const&			getGrade() const;

		void	increment();
		void	decrement();
};

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& b);

#endif

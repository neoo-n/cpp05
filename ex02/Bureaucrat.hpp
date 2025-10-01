
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

class	AForm;

class	Bureaucrat
{
    private:
		const std::string	_name;
		int					_grade;

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
        Bureaucrat();
        Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat(int grade);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &obj);

		std::string const& getName() const;
		int const& getGrade() const;

		void	increment();
		void	decrement();
		void	signAForm(AForm &f);
		void	executeForm(AForm const & form) const;
};

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& b);

#endif

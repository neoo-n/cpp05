
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
		const std::string	name;
		int					grade;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() {return "The grade is too high.";}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() {return "Thre grade is too low.";}
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
};

std::ostream	operator<<()

#endif

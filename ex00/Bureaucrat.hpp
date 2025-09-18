
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
			
		};

    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &cpy);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &obj);

		std::string const& getName() const;
		int const& getGrade() const;

		int increment();
		int decrement();
};

#endif

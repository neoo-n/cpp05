
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "../incl/AForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

class Intern
{
	private:
		class	NoProvidedFormName : public std::exception
		{
			public:
				const char*	what() const throw();
		};
    public:
        Intern();
        Intern(const Intern &cpy);
        ~Intern();
        Intern &operator=(const Intern &obj);

		AForm	*makeForm(const std::string name_form, const std::string target_form);
};

#endif



#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

class ShrubberyCreationForm : public AForm
{
    private:
		std::string	_target;

		class	FileNotOpen : public std::exception
		{
			public:
				const char*	what() const throw();
		};

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		ShrubberyCreationForm(const std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);

		void	execution() const;
};

#endif

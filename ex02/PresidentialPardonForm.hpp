
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &cpy);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
	
		void	execution();
};

#endif

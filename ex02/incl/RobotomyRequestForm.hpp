
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <unistd.h>
# include "AForm.hpp"

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &cpy);
		RobotomyRequestForm(const std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

		void	execution() const;
};

#endif

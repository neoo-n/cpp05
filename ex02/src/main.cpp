#include <iostream>
#include "../incl/Bureaucrat.hpp"
#include "../incl/AForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"


void	assignement_constructor_test()
{
	std::cout << "--- ASSIGNMENT CONSTRUCTOR TEST ---" << std::endl;
	Bureaucrat	b1("Dan");
	Bureaucrat	b2(45);
	Bureaucrat	btot("Fujii Kaze", 1);
	ShrubberyCreationForm	s1;
	ShrubberyCreationForm	s2("super_tree");
	RobotomyRequestForm		r1;
	RobotomyRequestForm		r2("genius");
	PresidentialPardonForm	p1;
	PresidentialPardonForm	p2("Sisi");

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;

	std::cout << std::endl << "** Form sign **" << std::endl;
	std::cout << "1)" << std::endl;
	b1.signAForm(s1);
	b2.signAForm(s1);
	btot.signAForm(s1);
	b1.signAForm(s2);
	b2.signAForm(s2);
	btot.signAForm(s2);
	
	std::cout << std::endl << "2)" << std::endl;
	b1.signAForm(r1);
	b2.signAForm(r1);
	btot.signAForm(r1);
	b1.signAForm(r2);
	b2.signAForm(r2);
	btot.signAForm(r2);

	std::cout << std::endl << "tot)" << std::endl;
	b1.signAForm(p1);
	b2.signAForm(p1);
	btot.signAForm(p1);
	b1.signAForm(p2);
	b2.signAForm(p2);
	btot.signAForm(p2);

	std::cout << std::endl;
	std::cout << s1 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << p1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << r2 << std::endl;
	std::cout << p2 << std::endl;

	std::cout << std::endl << "** Execution form **" << std::endl;
	std::cout << "1)" << std::endl;
	b1.executeForm(s1);
	b2.executeForm(s1);
	btot.executeForm(s1);
	b1.executeForm(s2);
	b2.executeForm(s2);
	btot.executeForm(s2);
	
	std::cout << std::endl << "2)" << std::endl;
	b1.executeForm(r1);
	usleep(100000);
	b2.executeForm(r1);
	usleep(100000);
	btot.executeForm(r1);
	usleep(100000);
	b1.executeForm(r2);
	usleep(100000);
	b2.executeForm(r2);
	usleep(100000);
	btot.executeForm(r2);

	std::cout << std::endl << "tot)" << std::endl;
	b1.executeForm(p1);
	b2.executeForm(p1);
	btot.executeForm(p1);
	b1.executeForm(p2);
	b2.executeForm(p2);
	btot.executeForm(p2);
}

int main()
{
	assignement_constructor_test();
	return 0;
}
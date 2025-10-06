#include <iostream>
#include "../incl/Bureaucrat.hpp"
#include "../incl/AForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"


void	assignement_constructor_test()
{
	std::cout << "--- ASSIGNMENT CONSTRUCTOR TEST ---" << std::endl;
	try
	{
		Bureaucrat	b("Fujii Kaze", 1);
		ShrubberyCreationForm	s1("super_tree");
		RobotomyRequestForm		r1("genius");
		PresidentialPardonForm	p1("Sisi");

		std::cout << b << std::endl;
		std::cout << s1 << std::endl;
		std::cout << r1 << std::endl;
		std::cout << p1 << std::endl;

		std::cout << std::endl << "** Form sign **" << std::endl;
		b.signAForm(s1);
		b.signAForm(r1);
		b.signAForm(p1);

		std::cout << std::endl << "** Execution form **" << std::endl;
		std::cout << "1)" << std::endl;
		b.executeForm(s1);
	
		std::cout << std::endl << "2)" << std::endl;
		b.executeForm(r1);

		std::cout << std::endl << "3)" << std::endl;
		b.executeForm(p1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
}

void	invalid_arguments_test()
{
	std::cout << std::endl << "--- INVALID ARGUMENTS TEST ---" << std::endl;
	try
	{
		std::cout << "** invalid shrubbery : too low **" << std::endl;
		Bureaucrat	b1("Fujii Kaze", 1);
		Bureaucrat	b2(150);
		ShrubberyCreationForm	s1("super_tree");

		b1.signAForm(s1);
		b2.executeForm(s1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	try
	{
		std::cout << std::endl << "** invalid robotomy : too low **" << std::endl;
		Bureaucrat	b1("Fujii Kaze", 1);
		Bureaucrat	b2(150);
		RobotomyRequestForm		r1("genius");

		b1.signAForm(r1);
		b2.executeForm(r1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	try
	{
		std::cout << std::endl << "** invalid presidential : too low **" << std::endl;
		Bureaucrat	b1("Fujii Kaze", 1);
		Bureaucrat	b2(150);
		PresidentialPardonForm	p1("Sisi");

		b1.signAForm(p1);
		b2.executeForm(p1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	try
	{
		std::cout << "** invalid shrubbery : not signed **" << std::endl;
		Bureaucrat	b("Fujii Kaze", 1);
		ShrubberyCreationForm	s1("super_tree");

		b.executeForm(s1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	try
	{
		std::cout << std::endl << "** invalid robotomy : not signed **" << std::endl;
		Bureaucrat	b("Fujii Kaze", 1);
		RobotomyRequestForm		r1("genius");
		

		b.executeForm(r1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	try
	{
		std::cout << std::endl << "** invalid presidential : not signed **" << std::endl;
		Bureaucrat	b("Fujii Kaze", 1);
		PresidentialPardonForm	p1("Sisi");

		b.executeForm(p1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
}

int main()
{
	assignement_constructor_test();
	invalid_arguments_test();
	return 0;
}